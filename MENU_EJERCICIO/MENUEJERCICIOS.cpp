#include <iostream>
using namespace std;

int main ()
{
    int iopcion;
    system("color 3");
    cout << "\n--------ESTE PROGRAMA TE DA OPCIONES (MENU) DEPENDIENDO EL DIA QUE SEA PARA QUE HAGAS TU RUTINA DE EJERCICIOS---------";
    cout << "\n\n1-LUNES";
    cout << "\n2-MARTES";
    cout << "\n3-MIERCOLES";
    cout << "\n4-JUEVES";
    cout << "\n5-VIERNES";
    cout << "\n6-SABADO";
    cout << "\n\nINTRODUCE EL NUMERO DE ACUERDO AL DIA QUE DECEAS ELEGIR PARA RUTINA:";
    cin >> iopcion;

    switch (iopcion)
    {
        case 1:
            cout << "\n\n***ELEGISTE EL DIA LUNES***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 1 Y 2****";
            break;
        case 2:
            cout << "\n\n***ELEGISTE EL DIA MARTES***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 3 Y 4****";
            break;
        case 3:
            cout << "\n\n***ELEGISTE EL DIA MIERCOLES***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 5 Y 6****";
            break;
        case 4:
            cout << "\n\n***ELEGISTE EL DIA JUEVES***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 7 Y 8****";
            break;
        case 5:
            cout << "\n\n***ELEGISTE EL DIA VIERNES***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 9 y 10****";
            break;
        case 6:
            cout << "\n\n***ELEGISTE EL DIA SABADO***";
            cout << "\n***DEBES REALIZAR EL EJRCICIO 11 y 12****";
            break;
        default:
            cout << "\n****INGRESO UN VALOR NO VALIDO***";
            break;
    }
    return 0;
}
