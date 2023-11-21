//
// komenda: "make run" uruchamia program
//
#include <iostream>
#include "listaTablicowa.cpp"

void print(List l)
{
	position i=First(l);
	while (i!=END(l))
	{
		printf ("  %d,", Retrieve(i,l));
		i=Next(i,l);
	}
	printf("\n");

}

int main(){
    List l;
    l.last=-1;
    Insert(100,First(l),l);
    print (l);

    for (int i=0; i<3;i++)
        Insert(i,First(l),l);
    print (l);

    Insert (20,Previous(END(l),l) ,l);
    print(l);
    Delete( Locate(20,l),l);
    print(l);
    Duplicate(l);
    print(l);
    Insert(100,END(l),l);
    print(l);
    Purge(l);
    print(l);
    return 0;
}