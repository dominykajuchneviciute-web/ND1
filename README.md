# Prioritetinė eilė (realizuota su masyvu)

Sukuriama prioritetinė eilė, kurios realizacijoje elementai masyvu išdėstomi prioritetų didėjimo tvarka. Tai užtikrina, kad elementas su didžiausia prioriteto reikšme bus masyvo gale.

## Kodas
### Struktūra

```C
  typedef struct
{
    int sizepr;
    int *data;
    int capacity;
} Priority;
```
### Funkcijų sąrašas

```C
  Priority *create(int capacity);
  int isEmpty(Priority *pr);
  int isFull(Priority *pr);
  void enqueue(Priority *pr, int element);
  int dequeue(Priority *pr);
  int highestPriority(Priority *pr);
  int numberOfElements(Priority *pr);
  void freePriority(Priority *pr);
```

