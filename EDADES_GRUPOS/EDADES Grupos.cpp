#include <iostream>
using namespace std;

int main()
{
    int edad;
    system("color f2");
    cout << "============ESTE PROGRAMA DETERMINA MEDIANTE TU EDAD A QUE GRUPO PERTENECES NINO, JOVEN, ADULTO O ANCIANO===============";
    cout << "\n\nINGRESA TU EDAD:";
    cin >> edad;

    if (edad <= 14)
    {
        cout << "\n USTED ES UN NINO";
    }
    else if (edad > 14, edad <= 18)
    {
        cout << "\n USTED ES UN JOVEN";
    }
    else if (edad >= 19, edad < 60)
    {
        cout << "\n USTED ES UN ADULTO";
    }
    else if (edad >= 60)
    {
        cout << "\n USTED ES UN ANCIANO";
    }

    return 0;
}
