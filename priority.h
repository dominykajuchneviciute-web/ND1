#ifndef PRIORITY_H
#define PRIORITY_H

typedef struct
{
    int sizepr;
    int *data;
    int capacity;
} Priority;

Priority *create(int capacity);
int isEmpty(Priority *pr);
int isFull(Priority *pr);
void enqueue(Priority *pr, int element);
int dequeue(Priority *pr);
int highestPriority(Priority *pr);
int numberOfElements(Priority *pr);
void freePriority(Priority *pr);

#endif
