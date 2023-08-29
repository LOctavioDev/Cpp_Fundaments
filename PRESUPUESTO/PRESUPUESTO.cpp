#include <iostream>
using namespace std;

int main()
{
    float presu, sumart, prod, art = 1, gasta = 0;

    system("color f4");
    cout << "-------ESTE PROGRAMA REALIZA LA SUMA DE TUS PRODUCTOS A COMPRAR DEPENDIENDO DEL PRESUPUESTO QUE USTED TENGA----------";
    cout << "\n\nINTRODUZCA LA CANTIDAD QUE TIENE PRESUPUPUESTADA A GASTAR:";
    cin >> presu;
    cout << "\n\n**********Presupuesto a gastar:" << "$" << presu << "**************";

    while (presu > 0)
    {
        cout << "\n\nINTRODUZCA EL PRECIO DE SU PRODUCTO:" << "$";
        cin >> prod;

        cout << "ARTICULO:" << art << "=" << "$" << prod;
        art++;

        presu = presu - prod;
        cout << "\n\n----------------TU RESTANTE DE PRESUPUESTO ES:" << "$" << presu;
        gasta = prod + gasta;
    }
    cout << "\n\n----------------DE TU PRESUPUESTO GASTASTE:" << "$" << gasta;
    cout << "\n\n°°°°°°°°°°°°°°°°°°°°Sobrepaso su presupuesto°°°°°°°°°°°°°°°°°°°°";

    return 0;
}
