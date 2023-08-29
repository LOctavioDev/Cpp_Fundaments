#include <iostream>
using namespace std;

int main ()
{
    char copcion;
    system("color 3");
    cout << "\n--------ESTE PROGRAMA TE DA OPCIONES PARA QUE ELIGAS LO QUE DECES DE LA DULCERIA EN EL CINE---------";
    cout << "\n\na-PALOMITAS";
    cout << "\nb-REFRESCO";
    cout << "\nc-DULCES";
    cout << "\nd-AGUA";
    cout << "\ne-NACHOS";
    cout << "\nf-HELADO";
	
    cout << "\n\nINTRODUCE LA LETRA PARA ELEGIR EL ALIMENTO QUE DECEAS COMPRAR:";
    cin >> copcion;

    switch (copcion)
    {
        case 'a':
            cout << "\n\n***ELEGISTE PALOMITAS***";
            break;
        case 'b':
            cout << "\n\n***ELEGISTE REFRESCO***";
            break;
        case 'c':
            cout << "\n\n***ELEGISTE DULCES***";
            break;
        case 'd':
            cout << "\n\n***ELEGISTE AGUA***";
            break;
        case 'e':
            cout << "\n\n***ELEGISTE NACHOS***";
            break;
        case 'f':
            cout << "\n\n***ELEGISTE HELADO***";
            break;
        default:
            cout << "\n****INGRESO UN VALOR NO VALIDO***";
            break;
    }
	
    return 0;
}
