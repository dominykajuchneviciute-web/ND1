#include <stdio.h>
#include <stdlib.h>
#include "priority.h"

Priority* create(int capacity)
{
    Priority *new_pr = (Priority*)malloc(sizeof(Priority));
    if (new_pr == NULL)
    {
        fprintf(stderr, "Atminties rezervavimo klaida.\n");
        exit(EXIT_FAILURE);
    }
    new_pr->data = (int*)malloc(capacity * sizeof(int));
    new_pr->sizepr = 0;
    new_pr->capacity = capacity;
    return new_pr;
}
int isEmpty(Priority *pr)
{
    return pr->sizepr == 0;
}

int isFull(Priority *pr)
{
    return pr->sizepr == pr->capacity;
}

void enqueue (Priority *pr, int element)
{
    if (pr->sizepr == pr->capacity)
    {
        pr->capacity *= 2;
        pr->data = (int*)realloc(pr->data, pr->capacity * sizeof(int));
    }
    int i = pr->sizepr - 1;
    while ((i >= 0) && (pr->data[i] > element))
    {
        pr->data[i + 1] = pr->data[i];
        i--;
    }
    pr->data[i + 1] = element;
    pr->sizepr++;
}

int dequeue(Priority *pr)
{
    pr->sizepr--;
    return pr->data[pr->sizepr];
}

int highestPriority(Priority *pr)
{
    return pr->data[pr->sizepr - 1];
}

int numberOfElements (Priority *pr)
{
    return pr->sizepr;
}

void freePriority(Priority *pr)
{
    free(pr->data);
    free(pr);
}

