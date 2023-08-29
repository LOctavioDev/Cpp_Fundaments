#include <iostream>
using namespace std;

int main()
{
    int num1;

    cout << "INTRODUCE UN NUMERO:";
    cin >> num1;

    while (num1 >= 0)
    {
        system("COLOR A7");
        cout << "\nEL NUMERO:" << num1 << "  ES POSITIVO" << endl;

        cout << "\nINTRODUCE UN NUMERO:";
        cin >> num1;
    }

    cout << "FIN DEL CICLO";
    return 0;
}
