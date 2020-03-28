#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define SIZE 5

int values[SIZE], rear = -1, front = -1;

void enQueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Nuestro queue esta lleno!\n");
    }
    else 
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        values[rear] = value;

        printf("Se inserto el valor correctamente: %d\n", value);

    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("Nuestro queue esta vacio!\n");
    }
    else
    {
        printf("Se elimino el valor: %d!\n", values[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(6);
    return 0;
}

