#include <iostream>

using namespace std;

int num=0;

int main()
{
    cout << "Ingrese el numero del ejercicio: " << endl;
    cin >> num;

    switch(num){

    case 1:
        cout << " Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B." << endl;
        int n1,n2;
        cout << "Ingrese el primer numero: " << endl;
        cin >> n1;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> n2;
        cout << "El residuo de la division entre " << n1 << " y " << n2 << " es: " << n1%n2 << endl;
        num=0;


    case 2:
        cout << " Escriba un programa que pida un número N e imprima en pantalla si es par o impar." << endl;
        int n;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        if(n%2==0) cout << n << " es par." << endl;
        else cout << n << " es impar." << endl;
        num=0;

    case 3:
        float a;
        float b;
        cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el mayor." << endl;
        cout << "Ingrese el primer numero: " << endl;
        cin >> a;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> b;
        if(a>b) cout << a << " es mayor que " << b << endl;
        else if(a==b) cout << a << " es igual a " << b << endl;
        else cout << a << " es menor que " << b << endl;

    default:
        cout << "Ingrese el numero del ejercicio: " << endl;
        cin >> num;
    }



    return 0;
}

