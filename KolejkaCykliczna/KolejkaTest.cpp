#include <iostream>
#include "KolejkaCykliczna.h"

int main()
{
    Kolejka Queue;
    printf("%s\n",Queue.Empty() ? "true" : "false");
    Queue.Enqueue(5);
    Queue.Print();
    printf("%s\n",Queue.Empty() ? "true" : "false");

    printf("%d\n",Queue.FrontElem());
    Queue.Dequeue();
    Queue.Print();
    printf("%s\n",Queue.Empty() ? "true" : "false");

    Queue.Enqueue(4);
    Queue.Enqueue(3);
    Queue.Enqueue(2);
    Queue.Print();

    printf("%d\n",Queue.FrontElem());
    Queue.Enqueue(1);
    Queue.Print();

    printf("%d\n",Queue.FrontElem());
    Queue.Dequeue();
    Queue.Print();

    printf("%d\n",Queue.FrontElem());
    Queue.Enqueue(6);
    Queue.Print();

    printf("%d\n",Queue.FrontElem());
    Queue.Dequeue();
    Queue.Dequeue();
    printf("%d\n",Queue.FrontElem());
    Queue.Print();
    Queue.Makenull();
    printf("%s\n",Queue.Empty() ? "true" : "false");

    // Queue.Enqueue(5);
    // Queue.Enqueue(5);
    // Queue.Enqueue(5);
    // Queue.Enqueue(5);
    // Queue.Print();


    return 0;
}