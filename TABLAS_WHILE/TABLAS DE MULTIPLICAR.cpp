#include <iostream>
using namespace std;

int main ()
{
    float inum, n, no;
    char x;

    system("color 9");
    cout << "\n°°°°°ESTE PROGRAMA MUESTRA LA TABLA DE MULTIPLICAR, DEPENDIENDO EL NUMERO QUE INTRODUZCA EL USUARIO°°°°°";
    cout << "\n\nINTROUCE EL NUMERO PARA LA TABLA DE MULTIPLICAR QUE DECEAS:";
    cin >> inum;
    cout << "\n\nINTROUCE EL NUMERO DE DONDE QUIERES QUE INICIE TU TABLA DE MULTIPLICAR:";
    cin >> n;
    cout << "\n\nINTROUCE EL NUMERO ASTA DONDE QUIERES QUE LLEGUE TU TABLA DE MULTIPLICAR:";
    cin >> no;

    cout << "\n\ntabla de multiplicar  " << inum;
    while (n <= no)
    {
        cout << "\n\n" << inum << "X" << n << "=" << inum * n;
        n = n + 1;
    }
    
    return 0;
}
