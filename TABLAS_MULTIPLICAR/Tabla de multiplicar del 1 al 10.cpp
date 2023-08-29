#include <iostream>
using namespace std;

int main ()
{
    float inum, n = 1;
    char x;

    system("color 9");
    cout << "\n°°°°°ESTE PROGRAMA MUESTRA LA TABLA DE MULTIPLICAR DE NUMEROS ENTRE 1 A 10°°°°°";
    cout << "\n\nINTROUCE EL NUMERO PARA LA TABLA DE MULTIPLICAR QUE DECEAS:";
    cin >> inum;

    cout << "\n\ntabla de multiplicar  " << inum;
    while (n <= 10)
    {
        cout << "\n\n" << inum << "X" << n << "=" << inum * n;
        n = n + 1;
    }
    
    return 0;
}
