#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cout << "PROGRAMA DE ESTRUCTURA DE ESTRUCUTURA SELECTIVA SIMPLE";
    cout << "VALOR DE LAS VARIABLES:";

    cout << "\nINTRODUZCA EL VALOR DE A:";
    cin >> A;
    cout << "\nINTRODUZCA EL VALOR DE B:";
    cin >> B;
    cout << "\nINTRODUZCA EL VALOR DE C:";
    cin >> C;
    cout << "\nVALOR DE LAS VARIABLES";

    cout << "\n\n   PROCESO C=B-A";

    if (B >= A)
    {
        C = B - A;
        cout << "\nEl resultado de C es:" << C;
    }
    else
    {
        cout << "\n\nEL RESULTADO ES FALSO";
    }

    return 0;
}
