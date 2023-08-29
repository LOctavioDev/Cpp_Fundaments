#include <iostream>
using namespace std;

int main()
{
    char copcion;
    system("color 4");
    cout << "********ESTE PROGRAMA TE ENVIA UN MENSAJE DEPENDIENDO DE LA NOTA QUE HAYAS SACADO EN TU EXAMEN FINAL**********";
    cout << "\n\nA-a";
    cout << "\nB-b";
    cout << "\nC-c";
    cout << "\nD-d";
    cout << "\nE-e";
    cout << "\nF-f";

    cout << "\n\nINTRODUCE LA LETRA QUE TIENES EN TU EXAMEN FINAL:";
    cin >> copcion;

    switch(copcion)
    {
        case 'A': case 'a':
            cout << "\n\n***Excelente, Aprobado con honores***";
            break;

        case 'B': case 'b':
            cout << "\n\n***Aprobado de forma sobresaliente***";
            break;

        case 'C': case 'c':
            cout << "\n\n***Aprobado con buen desempeno***";
            break;

        case 'D': case 'd':
            cout << "\n\n***Aprobado de manera regular***";
            break;

        case 'E': case 'e':
            cout << "\n\n***Aprobado, pero se sugiere mejorar***";
            break;

        case 'F': case 'f':
            cout << "\n\n***Reprobado con rendimiento pobre***";
            break;

        default:
            cout << "\n****INGRESO UN VALOR NO VALIDO***";
            break;
    }
    
    return 0;
}
