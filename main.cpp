#include <iostream>

using namespace std;
/*
int main()
{
    int suma=0;
    for(int numero=0; numero < 1000000; numero ++){
        if(numero % 3 ==0 || numero % 5 == 0){
            suma=suma+numero;
        }
    }
    cout << suma << endl;
    return 0;
}

int main()
{
    int num, c=0, d=0, e=0, x=0, n=0;
    cout << "Introduzca un numero: ";
    cin >> num;
    d= num/10;
    c=num%10;
    cout << c;
    for(int i=0; i<=10; i++){
        e=num;
        num = d;
        d= num/10;
        c=num%10;
        cout << c;
    }
    return 0;
}*/

int main()
{
    int base, exp,c=1;
    cout << "Ingrese una base: ";
    cout << "Ingrese un numero exponente a ser elevado: " ;
    cin >> exp;


    for(int i=0; i<exp; i++)
    {
        c=c*base;
    }

    cout << "resultado: " << c;

    return 0;
}
