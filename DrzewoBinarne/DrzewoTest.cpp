#include <iostream>
#include "DrzewoBinarne.h"

using std::cout;
using std::endl;

int main()
{
    BinaryTree Drzewo;
    Drzewo.BuildTree(9);
    cout << "Korzen: " << Drzewo.GetLabel(Drzewo.ROOT()) << endl;
    cout << "Lewy: " << Drzewo.GetLabel(Drzewo.LEFT_CHILD(Drzewo.ROOT())) << endl;
    cout << "Prawy: " << Drzewo.GetLabel(Drzewo.RIGHT_CHILD(Drzewo.ROOT())) << endl;

    PNode P_Dzi_Korz = Drzewo.RIGHT_CHILD(Drzewo.ROOT());
    cout << "Rodzic prawego dziecka korzenia: " << Drzewo.GetLabel(Drzewo.PARENT(P_Dzi_Korz)) << endl;

    PNode P_Dzi_L_Dzi_Korz = Drzewo.PARENT(Drzewo.RIGHT_CHILD(Drzewo.LEFT_CHILD(Drzewo.ROOT())));
    cout << "Rodzic prawego dziecka lewgo dziecka korzenia: " << Drzewo.GetLabel(P_Dzi_L_Dzi_Korz) << endl;

    cout << Drzewo.GetLabel(Drzewo.LEFT_CHILD(Drzewo.LEFT_CHILD(Drzewo.LEFT_CHILD(Drzewo.ROOT())))) << endl;

    Drzewo.PreOrder(Drzewo.ROOT());
    std::cout << std::endl;

    Drzewo.InOrder(Drzewo.ROOT());
    std::cout << std::endl;

    Drzewo.PostOrder(Drzewo.ROOT());
    std::cout << std::endl;

    return 0;
}