#include <iostream>
using namespace std;

int main()
{
    int n1, n2, resultado;
    system("color 4");

    cout << "ESTE PROGRAMA REALIZA LAS OPERACIONES DE SUMA, RESTA, MULTIPLICACION, DIVICION DE DOS NUMEROS\n ";
    cout << "****Suma de dos numeros*****";
    cout << "\n\nINTRODUCE EL PRIMER NUMERO:";
    cin >> n1;
    cout << "INTRODUCE EL SEGUNDO NUMERO:";
    cin >> n2;
    resultado = n1 + n2;
    cout << "EL RESULTADO DE LA SUMA ES:" << resultado;

    cout << "\n\n****Resta de dos numeros*****";
    cout << "\n\nINTRODUCE EL NUMERO AL QUE LE QUIERES RESTAR:";
    cin >> n1;
    cout << "INTRODUCE EL SEGUNDO NUMERO LA CANTIDAD QUE RESTARAS:";
    cin >> n2;
    resultado = n1 - n2;
    cout << "EL RESULTADO DE LA RESTA ES:" << resultado;

    cout << "\n\n****Multiplicacion de dos numeros*****";
    cout << "\n\nINTRODUCE EL PRIMER NUMERO:";
    cin >> n1;
    cout << "INTRODUCE EL SEGUNDO NUMERO:";
    cin >> n2;
    resultado = n1 * n2;
    cout << "EL RESULTADO DE LA MULTIPLICACION ES:" << resultado;

    cout << "\n\n****Division de dos numeros*****";
    cout << "\n\nINTRODUCE EL PRIMER NUMERO:";
    cin >> n1;
    cout << "INTRODUCE EL SEGUNDO NUMERO:";
    cin >> n2;
    resultado = n1 / n2;
    cout << "EL RESULTADO DE LA DIVISION ES:" << resultado;

    return 0;
}
