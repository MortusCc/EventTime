#include "EventTime.h"
int main()
{
    int len;
    scanf("%d",&len);
    Event event[MAX];
    for (int i = 0; i < len; i++)
    {
        scanf("%d %d",&event[i].begin_hour,&event[i].end_hour);
    }
    printEvent(event,len);
    if (canBeOrder(event,len))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

