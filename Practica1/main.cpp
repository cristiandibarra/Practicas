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
        else cout << b << " es mayor que " << a << endl;
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
        float a,b, aux=0;
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
        int n1, n2, aux=1;
        cout << "Ingrese el primer numero entero: " << endl;
        cin >> n1;
        cout << "Ingrese el segundo numero entero: " << endl;
        cin >> n2;
        for(int i=0; i<n2; i++) aux*=n1;     //Ejecuto las multiplicaciones para hallar la potencia
        cout << n1 << "^" << n2 << "=" << aux << endl;
        num=-1;
    }

    else if(num==7){
        cout << " Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)." << endl << endl;
        int n=0, aux=0;
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
            aux1+=n;            //Sumo todo lo ingresado
            aux2++;             //Aumento 1 al contador que servirá para dividir
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
           if(n>aux) aux=n;       //Voy almacenando en aux el mayor
           cout << "Ingrese un numero: " << endl;
           cin >>n;
        }
        cout << "El numero mayor fue: " << aux << endl;
        num=-1;
    }

    else if(num==18){
        cout << "Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto. " << endl << endl;
        int n, i=0;
        cout << "Ingrese un numero: " << endl;
        cin >> n;
        for(i; i*i<=n; i++){         //Este ciclo compara los cuadrados perfectos con el n° ingresado
            if(i*i==n){              //Si este cuadrado pfcto, es igual al ingresado, imprima y abandone al ciclo
                cout << n << " Es un cuadrado perfecto: " << endl;
                break;
            }
        }
        if(i*i>n) cout << n << " No es un cuadrado perfecto: " << endl;   //Si no se encontró, entonces no es cuadrado pfcto.
        num=-1;


    }

    else if(num==19){
        cout << "Escriba un programa que pida un número N e imprima si es o no un número primo." << endl << endl;
        int n, aux=0;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        for(int i=1; i<=n; i++){       //Inicializo en 1 y ejecuto hasta que sea igual a n.
            if(n%i==0) aux++;          //Si el residuo es 0 aumente 1 a la variable auxiliar.
        }
        if(aux==2) cout << n << " Es primo." << endl;      //Si solo hay 2 divisores, entonces n es primo
        else cout << n << " No es primo." << endl;         //Si hay mas de 2 divisores, n no es primo.
        num=-1;
    }

    else if(num==20){
        cout << " Escriba un programa que pida un número N e imprima si es o no un palíndromo." << endl << endl;
        int n, n2, aux=0;
        float cola=0;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        n2=n;
        for(int i=0; n>0; i++){     //Mientras haya valores que extraer de n
            cola=n%10;              //Extraigo el ultimo digito
            n=int(n/10);            //Le quito el ultimo digito a la entrada original para poder seguir operandolo
            aux=aux*10+cola;        //Voy armando el segundo numero de forma inversa al ingresado
        }
        if(n2==aux) cout << n2 << " Es palindromo." << endl;     //Si el n° original y el numero al reves son iguales, son.
        else cout << n2 << " No es un palindromo." << endl;      //Si no no es palindromo.
        num=-1;

    }

    else if(num==21){
        cout << "Escriba un programa que pida un carácter C, si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla." << endl << endl;
        char l;
        cout << "Ingrese un caracter: " << endl;
        cin >> l;
        if(int(l)>=97 && int(l)<=122) cout << "Letra convertida: " << char(l-32) << endl;    //Si es minuscula resta 32
        else if(int(l)>=65 && int(l)<=90) cout << "Letra convertida: " << char(l+32) << endl;  //Si es mayuscula suma 32
        else cout << l << " No esta en el alfabeto." << endl;
        num=-1;
    }

    else if(num==22){
        cout << " Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos." << endl << endl;
        int n=0, m=0, h=0;
        cout << "Ingrese una cantidad entera de segundos: " << endl;
        cin >> n;
        m=n/60;             //Saco los minutos
        h=m/60;             //Saco las horas
        n-=m*60;            //Resto todos los segundos que hacen los minutos y las horas para me queden los segundos netos
        while(m>=60) m-=60; //Saco los minutos netos
        cout << h << ":" << m << ":" << n << endl;
        num=-1;
    }

    else if(num==23){
        cout << "Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos." << endl << endl;
        int n, m, MCM;             //MCM minimo multiplo en comun;
        cout << "Ingrese el primer numero entero: " << endl;
        cin >> n;
        cout << "Ingrse el segundo numero entero: " << endl;
        cin >> m;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(n*i==m*j){
                    MCM=m*j;
                    break;
                }
            }
        }
        cout << "El MCM entre " << n << " y " << m << " es: " << MCM << endl;
        num=-1;

    }

    else if(num==24){
        cout << "Escriba un programa que pida una número entero e imprima un cuadrado de dicho tamaño." << endl << endl;
        int n=0;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){                         //Ciclo para recorrer un cuadrado de dimensiones nxn
                if(i==0 || j==0) cout << "+";               //Si me encuentro en primera columna o primera fila imprimo "+".
                else if(i==n-1 || j==n-1) cout << "+";      //Si estoy en ultima columna o fila imprimo "+".
                else cout << " ";                           //Si no estoy en los bordes imprimo espacio.
            }
            cout << endl;                                   //Salto de linea para las filas.
        }
        num=-1;
    }

    else if(num==25){
        cout << "Escriba un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N." << endl << endl;
        int n=0;
        int x=0, aux=0;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;
        x=n;

        while(n>0){
            n/=10;
            aux++;
        }
        cout << x << " tiene " << aux << " digitos." << endl;
        num=-1;


    }

    else if(num==26){
        cout << "Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría." << endl << endl;
        float l1, l2, l3;
        cout << "Ingrese el primer lado: " << endl;
        cin >> l1;
        cout << "Ingrese el segundo lado: " << endl;
        cin >> l2;
        cout << "Ingrese el tercer lado: " << endl;
        cin >> l3;

        if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
           if(l1==l2 && l2==l3) cout << "Se forma un triangulo Equilatero" << endl;   //aplico teorema de la desigualdad
           else if((l1==l2 && l1!=l3)||(l1=l3 && l2!=l1)||(l2==l3 && l1!=l2)) cout << "Se forma un triangulo Isoceles" << endl;
           else cout << "se forma un triangulo escaleno." << endl;        //Verifico igualdades entre lados para ver que tipo es.
        }
        else cout << "Los lados ingresados no forman un triangulo." << endl;
        num=-1;
    }

    else if(num==27){
        cout << " Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar." << endl << endl;
        float n=0, m=0, res=0;
        char c;
        cout << "Ingrese el primer operando: " << endl;
        cin >> n;
        cout << "Ingrese el signo de la operacion a realizar: " << endl;
        cin >> c;
        cout << "Ingrese el segundo operando: " << endl;
        cin >> m;

        if(c=='+'){
            res=n+m;
            cout << n << "+" << m << "=" << res << endl;
        }
        else if(c=='-'){
            res=n-m;
            cout << n << "-" << m << "=" << res << endl;
        }
        else if(c=='/'){
            res=n/m;
            cout << n << "/" << m << "=" << res << endl;
        }
        else if(c=='*'){
            res=n*m;
            cout << n << "*" << m << "=" << res << endl;
        }
        num=-1;
    }

  }

    return 0;
}

