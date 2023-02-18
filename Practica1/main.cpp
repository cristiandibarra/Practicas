#include <iostream>

using namespace std;

int num=0;

int main()
{
    cout << "Ingrese el numero del ejercicio (0 para terminar): " << endl;
    cin >> num;

   while(num!=0){

    if(num==1){
        cout << " Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B." << endl << endl;
        int n1, n2;
        cout << "Ingrese el primer numero: " << endl;
        cin >> n1;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> n2;
        cout << "El residuo de la division entre " << n1 << " y " << n2 << " es: " << n1%n2 << endl;
        num=-1;
    }

    else if(num==-1){
        cout << "Ingrese el numero del ejercicio (0 para terminar): " << endl;
        cin >> num;
    }


    else if(num==2){
        cout << " Escriba un programa que pida un número N e imprima en pantalla si es par o impar." << endl << endl;
        int n;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        if(n%2==0) cout << n << " es par." << endl;  //Residuo
        else cout << n << " es impar." << endl;
        num=-1;
    }

    else if(num==3){
        float a, b;
        cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el mayor." << endl << endl;
        cout << "Ingrese el primer numero: " << endl;
        cin >> a;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> b;
        if(a>b) cout << a << " es mayor que " << b << endl;
        else if(a==b) cout << a << " es igual a " << b << endl;
        else cout << a << " es menor que " << b << endl;
        num=-1;
    }

    else if(num==4){
        float a,b;
        cout << " Escriba un programa que pida dos números A y B e imprima en pantalla el menor." << endl << endl;
        cout << "Ingrese el primer numero: " << endl;
        cin >> a;
        cout << "Ingrese el segundo numero:" << endl;
        cin >> b;
        if(a<b) cout << "El menor es: " << a << endl;
        else if(a==b) cout  << a << " es igual a " << b << endl;
        else cout << "El menor es: " << b << endl;
        num=-1;
    }

    else if(num==5){
        cout << " Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo." << endl << endl;
        float a,b, aux;
        cout << "Ingrese el primer numero: " << endl;
        cin >> a;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> b;
        aux=(((a/b)-int(a/b))*10); //Casteo para separar el primer decimal.
        if(aux<=5) cout << a << "/" << b << "=" << int(a/b) << endl;
        else cout << a << "/" << b << "=" << int(a/b)+1 << endl;
        num=-1;
    }

    else if(num==6){
        cout << " Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A**B, sin hacer uso de librerías matemáticas." << endl << endl;
        int n1, n2, aux;
        cout << "Ingrese el primer numero entero: " << endl;
        cin >> n1;
        cout << "Ingrese el segundo numero entero: " << endl;
        cin >> n2;
        aux=n1;
        for(int i=0; i<n2-1; i++) aux*=aux;     //Ejecuto las multiplicaciones para hallar la potencia
        cout << n1 << "^" << n2 << "=" << aux << endl;
        num=-1;
    }

    else if(num==7){
        cout << " Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)." << endl << endl;
        int n, aux;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        for(int i=0; i<=n; i++) aux+=i;
        cout << "La sumatoria entre 0 y " << n << " es: " << aux << endl;
        num=-1;

    }

    else if(num==8){
        cout << "Escriba un programa que pida un número N e imprima en pantalla su factorial." << endl << endl;
        int n, aux=1;    //Inicializo en 1 para poder empezar
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        for(int i=1; i<=n; i++) aux*=i; //Ejecuto las multiples multiplicaciones durante el ciclo y al meceno en aux
        cout << n << "! = " << aux << endl;
        num=-1;

    }

    else if(num==9){
        cout << " Escriba un programa que pida un número N e imprima el perímetro y área de un círculo con radio N." << endl << endl;
        float radio, pi=3.1416;
        cout << "Ingrese el radio del circulo: " << endl;
        cin >> radio;
        cout << "Perimetro: " << 2*pi*radio << endl;
        cout << "Area: " << pi*radio*radio << endl;
        num=-1;
    }

    else if(num==10){
        cout << "Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100." << endl << endl;
        int n, aux=1;           //Inicializo en 1 para empezar;
        cout << "Ingrese un numero entero: " << endl << endl;
        cin >> n;
        while(n*aux<=100){
            cout << n*aux << endl;
            aux+=1;
        }
        num=-1;
    }

    else if(num==11){
        cout << "Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN." << endl << endl;
        int n;
        cout << "Imgrese un numero entero: " << endl;
        cin >> n;
        for(int i=1; i<=10; i++) cout << i << "x" << n << "=" << i*n << endl; //Imprimo valiendome de i.
        num=-1;
    }
    else if(num==12){
        cout << "Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5" << endl << endl;
        int n, aux=1;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        for(int i=1; i<=5; i++){
            cout << n << "^" << i << "=" << n*aux << endl; //Imprimo la potencia valiendome de i
            aux*=n;                                        //Aumento aux en el factor actual.
        }
        num=-1;
    }

    else if(num==13){
        cout << " Escriba un programa que pida un número N e imprima todos los divisores de N." << endl << endl;
        int n;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        cout << "los divisores de " << n << " son : " << endl;
        for(int i=1; i<=n; i++) if(n%i==0) cout << i << endl;    //Si el residuo entre n e i es 0 imprimir
        num=-1;
    }

    else if(num==14){
        cout << "Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1." << endl << endl;
        for(int i=1; i<=50; i++){
            cout << i << "          " << 51-i << endl;
        }
        num=-1;
    }

    else if(num==15){
        cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados." << endl << endl;
        float n, aux=0;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        while(n!=0){                            //Mientras la entrada sea diferente de cero.
            aux+=n;                             //Sume a la variavle aux la nueva entrada
            cout << "Ingrese un numero: " << endl;
            cin >> n;
        }
        cout << "El resultado de la sumatoria es: " << aux << endl;  //Imprimir aux despues que el ciclo acaba
        num=-1;
    }

    else if(num==16){
        cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero)." << endl << endl;
        float n, aux1=0;
        int aux2=0;
        cout << "ingrese un numero: " << endl;
        cin >> n;
        while(n!=0){
            aux1+=n;
            aux2++;
            cout << "Ingrese un numero: " << endl;
            cin >> n;
        }
        cout << "El promedio es: " << aux1/aux2 << endl;
        num=-1;
    }

    else if(num==17){
        cout << "Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados." << endl << endl;
        float n, aux;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        aux=n;
        while(n!=0){
           if(n>aux) aux=n;
           cout << "Ingrese un numero: " << endl;
           cin >>n;
        }
        cout << "El numero mayor fue: " << aux << endl;
        num=-1;
    }

    else if(num==18){
        cout << "Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto. " << endl << endl;
        int n, aux=1;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
    }
  }

    return 0;
}

