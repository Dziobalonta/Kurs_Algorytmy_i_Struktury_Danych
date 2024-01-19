//
// komenda: "make run" uruchamia program
//
#include <iostream>
#include "ListaWskaznikowa.cpp"

using std::cout;
using std::endl;

int main()
{
    Lista List;
    List.Insert(5, List.First());
    cout << List.Retrieve(List.First()) << endl;

    List.Insert(2, List.First());
    cout << List.Retrieve(List.First()) << " " << List.Retrieve(List.Next(List.First())) << endl;

    List.Insert(1, List.Next(List.First()));
    List.Print_List();

    List.Insert(100, List.END());
    List.Print_List();

    List.Delete(List.Previous(List.Locate(100)));
    List.Print_List();
    
    return 0;
}