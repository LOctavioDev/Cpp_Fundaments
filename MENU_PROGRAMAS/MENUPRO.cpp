#include <iostream>
using namespace std;

int main ()
{
    int opcio;
    do
    {
        int imenu;
        system("COLOR 4");
        cout << "----------ESTE PROGRAMA ES UN MENU COMPLETO DE MAS PROGRAMAS QUE INCLUYEN LOS SIGUIENTES----------";
        cout << "\n\n1-CONVERSIONES";
        cout << "\n2-AREAS";
        cout << "\n3-OPERACIONES BASICAS (entre dos numeros)";
        cout << "\n4-CALIFICACIONES";

        cout << "\n\nINTRODUCE EL NUMERO DE ACUERDO AL PROGRAMA QUE DECEAS ACCEDER:";
        cin >> imenu;
        system("cls");

        switch (imenu)
        {
            do
            {
                case 1:
                    char let;
                    cout << "\n\n*********ELEGISTE CONVERSIONES**********";
                    cout << "\n\nELIGE UNA DE LAS SIGUIENTES:";
                    cout << "\n\nMETROS A KILOMETROS (A)";
                    cout << "\nPESOS A DOLARES (B)";
                    cout << "\n\nINTRODUCE LA LETRA DE ACUERDO AL PROGRAMA QUE DECEAS ACCEDER:";
                    cin >> let;
                    system("cls");
                    system("color 7");
                    switch (let)
                    {
                        case 'A': case 'a':
                            float metro, kilm;
                            cout << "\n\n----------CONVERSION METROS A KILOMETROS----------";
                            cout << "\n\nIntroduzca la cantidad en metros que decea convertir a kilometros:";
                            cin >> metro;
                            kilm = metro / 1000;
                            cout << "SUS METROS CONVERTIDOS A KILOMETROS SON:" << kilm;
                            break;

                        case 'B': case 'b':
                            float pes, dol;
                            cout << "\n\n°°°°°°°°°°CONVERSION DE PESOS A DOLARES°°°°°°°°°°";
                            cout << "\n\nIntroduzca la cantidad de pesos que decea convertir a dolares:";
                            cin >> pes;
                            dol = pes * 0.051;
                            cout << "SUS PESOS CONVERTIDOS A DOLARES SON:" << dol;
                            break;

                        default:
                            cout << "\n****INGRESO UN VALOR NO VALIDO***";
                            break;
                    }
                    cout << "\n\n\n\nPRECIONE 0 PARA REGRESAR AL MENU CONVERCIONES Y 1 PARA SALIR AL MENU DEL PROGRAMA:";
                    cin >> opcio;
                    system("cls");
                } while (opcio == 0);
                break;

                // ... (Resto de los casos del switch)

                default:
                    cout << "\n****INGRESO UN VALOR NO VALIDO***";
                    break;
            }
            cout << "\n\n\n\nPRECIONE 0 PARA CONTINUAR AL MENU PRINCIPAL Y 1 PARA SALIR DEL PROGRAMA:";
            cin >> opcio;
            system("cls");
        } while (opcio == 0);
        cout << "\nFIN DEL PROGRAMA";

        return 0;
    }

