#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <locale.h>
#include "rlutil.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "spanish");

// DECLARACION VARIABLES
    int factorial, numero, c=0, snumero, M, n, restacombinacion1, factorial1, factorial2, factorial3, respuesta1, a, b, producto1, mnumero, nnumero, CR_NUMERADOR, CR_DENOMINADOR, CR_DENOMINADOR2;
    char opcion, opcion2;
    rlutil::setColor(rlutil::WHITE);
    cout << "¿Que operacion queres hacer?" <<endl;
    cout <<"----------------------------------------" <<endl;
    cout << "Seleccioná la opción:\n \n a (Factorial)\n b (Combinaciones)\n c (Variaciones)\n d (Permutaciones)";
    rlutil::locate(5, 12);
    cout << "Opción: ";
    cin >> opcion;
    system("CLS");
    switch(opcion)
    {
    case 'a':
        rlutil::locate(12,1);
        cout << "FACTORIALES\n";
        cout << "------------------------------------\n";
        rlutil::locate(7,4);
        cout << "N!="<<endl;
        rlutil::locate(7,4);
        cin >> numero;
        snumero = numero;
        factorial = numero;
        while(numero!=1)
        {
            c++;
            factorial*=c;
            numero--;
        }
        rlutil::locate(11,4);
        rlutil::setColor(rlutil::GREEN);
        cout << factorial <<endl <<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "------------------------------------\n";
        break;
    case 'b':
        cout << "¿Se repite?" <<endl << "(S/N)" <<endl;
        cin >> opcion2;
        system("CLS");
        if(opcion2=='N'|| opcion2=='n')
        {
            rlutil::locate(12,1);
            cout << "COMBINACIONES\n";
            cout << "------------------------------------\n";
            rlutil::locate(7,4);
            cout << "M C n =";
            rlutil::locate(7,4);
            cin >> M;
            rlutil::locate(11,4);
            cin >> n;
            mnumero = M;
            nnumero = n;
            restacombinacion1 = M-n;
            factorial1=M;
            factorial2=n;
            factorial3=restacombinacion1;
            while(M!=1)
            {
                c++;
                factorial1*=c;
                M--;
            }

            c=0;
            while(n!=1)
            {
                c++;
                factorial2*=c;
                n--;
            }
            c=0;
            while(restacombinacion1!=1)
            {
                c++;
                factorial3*=c;
                restacombinacion1--;
            }
            producto1 = factorial2*factorial3;
            respuesta1 = factorial1/producto1;
            rlutil::locate(15,4);
            rlutil::setColor(rlutil::GREEN);
            cout << respuesta1 <<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "\n------------------------------------\n";
        }
        else                                            //                 COMBINACIONES REPETIDAS
        {
            if(opcion2 == 'S' || opcion2 == 's')
            {
                cout << "Ingrese M (Población)" <<endl;
                cin >> M;
                cout << "Ingrese n (Muestra)" <<endl;
                cin >> n;
                system("cls");
                mnumero = M;
                nnumero = n;
                CR_NUMERADOR = (M+n)-1;
                CR_DENOMINADOR = M-1;
                factorial1 = CR_NUMERADOR;
                factorial2 = n;
                factorial3 = CR_DENOMINADOR;
                while(CR_NUMERADOR != 1)
                {
                    c++;
                    factorial1*=c;
                    CR_NUMERADOR--;
                }
                c = 0;
                while(n != 1)
                {
                    c++;
                    factorial2*=c;
                    n--;
                }
                c = 0;
                while(CR_DENOMINADOR != 1)
                {
                    c++;
                    factorial3*=c;
                    CR_DENOMINADOR--;
                }
                CR_DENOMINADOR2 = factorial2*factorial3;
                respuesta1 = factorial1/CR_DENOMINADOR2;
                cout << respuesta1;
            }
        }
        break;
    case 'c':
        cout << "¿Se repite?" <<endl << "(S/N)" <<endl;
        cin >> opcion2;
        system("CLS");
        if(opcion2 == 'S' ||opcion2 == 's')
        {
            rlutil::locate(12,1);
            cout << "VARIACIONES CON REPETICION\n";
            cout << "------------------------------------\n";
            rlutil::locate(7,4);
            cout << "M VR n =";
            rlutil::locate(7,4);
            cin >> M;
            rlutil::locate(11,4);
            cin >> n;
            c=1;
            mnumero= M;
            while(c!=n)
            {
                c++;
                M*=M;
            }
            rlutil::locate(15,4);
            rlutil::setColor(rlutil::GREEN);
            cout << mnumero <<"^" <<n <<" = " << M <<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "------------------------------------\n";
        }
        else
        {
            if(opcion2 == 'N' || opcion2 == 'n')
            {
                rlutil::locate(12,1);
                cout << "VARIACIONES CON REPETICION\n";
                cout << "------------------------------------\n";
                rlutil::locate(7,4);
                cout << "M V n =";
                rlutil::locate(7,4);
                cin >> M;
                rlutil::locate(11,4);
                cin >> n;
                CR_DENOMINADOR = M - n;
                CR_NUMERADOR = M;
                factorial1 = M;
                factorial2 = CR_DENOMINADOR;
                while(CR_NUMERADOR != 1)
                {
                    c++;
                    factorial1*=c;
                    CR_NUMERADOR--;
                }
                c = 0;
                while(CR_DENOMINADOR != 1)
                {
                    c++;
                    factorial2*=c;
                    CR_DENOMINADOR--;
                }
                respuesta1 = factorial1/factorial2;
                rlutil::locate(15,4);
                rlutil::setColor(rlutil::GREEN);
                cout << respuesta1 <<endl;
                rlutil::setColor(rlutil::WHITE);
                cout << "\n------------------------------------\n";
            }
        }
        break;
    case 'd':
        cout << "¿Se repite?" <<endl << "(S/N)" <<endl;
        cin >> opcion2;
        system("CLS");
        if(opcion2 == 'S' ||opcion2 == 's')
        {
            rlutil::locate(12,1);
            cout << "PERMUTACIÓN CON REPETICION\n";
            cout << "------------------------------------\n";
            rlutil::locate(7,4);
            cout << "a,b P n =";
            rlutil::locate(7,4);
            cin >> a;
            rlutil::locate(9,4);
            cin >> b;
            CR_NUMERADOR= n;
            CR_DENOMINADOR = a;
            CR_DENOMINADOR2 = b;
            factorial1 = CR_NUMERADOR;
            factorial2 = CR_DENOMINADOR;
            factorial3 = CR_DENOMINADOR2;
            while(CR_NUMERADOR != 1)
            {
                c++;
                factorial1*=c;
                CR_NUMERADOR--;
            }
            c = 0;
            while(CR_DENOMINADOR != 1)
            {
                c++;
                factorial2*=c;
                CR_DENOMINADOR--;
            }
            c = 0;
            while(CR_DENOMINADOR2 != 1)
            {
                c++;
                factorial3*=c;
                CR_DENOMINADOR2--;
            }
            c = 0;
            respuesta1 = factorial2 * factorial3;
            restacombinacion1 = factorial1/respuesta1;
            rlutil::locate(16,4);
            rlutil::setColor(rlutil::GREEN);
            cout << restacombinacion1;
        }
        else
        {
            if(opcion2 == 'N' ||opcion2 == 'n')
            {
                rlutil::locate(12,1);
                cout << "PERMUTACIÓN\n";
                cout << "------------------------------------\n";
                rlutil::locate(7,4);
                cout << "n P =";
                rlutil::locate(7,4);
                cin >> n;
                factorial = n;
                while(n!=1)
                {
                    c++;
                    factorial*=c;
                    n--;
                }
                rlutil::locate(13,4);
                rlutil::setColor(rlutil::GREEN);
                cout << factorial <<endl <<endl;
                rlutil::setColor(rlutil::WHITE);
                cout << "\n------------------------------------\n";

            }
        }


        break;
    }
    system("pause");
    return 0;
}
