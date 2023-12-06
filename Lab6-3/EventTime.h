#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct Event
{
    int begin_hour;
    int end_hour;
}Event;
#define MAX 100
void printEvent(struct Event* event, int len);
int canBeOrder(struct Event* event, int len);
void BubbleSort(struct Event* event, int n);
void Swap(struct Event* event, int i, int j);