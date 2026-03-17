#include <stdio.h>
#include "priority.h"

int main()
{
    Priority *pr=create(10);
    if(isEmpty(pr))
    {
        printf("The queue is empty.\n");
    }
    else
    {
        printf("The queue is not empty.\n");
    }
    enqueue(pr, 11);
    enqueue(pr, 12);
    enqueue(pr, 13);
    printf("The highest priority is: %d\n", highestPriority(pr));
    printf("The number of elements is: %d\n", numberOfElements(pr));
    printf("Deleted: %d\n", dequeue(pr));
    printf("Now the highest priority is: %d\n", highestPriority(pr));
    if (isFull(pr))
    {
        printf("The queue is full.\n");
    }
    else
    {
        printf("The queue is not full.\n");
    }
    freePriority(pr);
    return 0;
}
