#include "EventTime.h"
void printEvent(struct Event* event, int len)
{
    BubbleSort(event, len);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (event[j].begin_hour == event[j + 1].begin_hour && event[j].end_hour > event[j + 1].end_hour)
            {
                Swap(event, j, j + 1);
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d %d\n", event[i].begin_hour, event[i].end_hour);
    }
}
int canBeOrder(struct Event* event, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (event[j].begin_hour == event[j + 1].begin_hour || event[j].end_hour > event[j + 1].begin_hour)
            {
                return 0;
            }
        }
    }
    return 1;
}
void BubbleSort(struct Event* event, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (event[j].begin_hour > event[j + 1].begin_hour)
            {
                Swap(event, j, j + 1);
            }
        }
    }
}
void Swap(struct Event* event, int i, int j)
{
    Event temp = event[i];
    event[i] = event[j];
    event[j] = temp;
}