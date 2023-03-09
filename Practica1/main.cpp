#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int num=0;

int main()
{
    srand (time(NULL));
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

    else if(num==28){
        cout << " Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma innita: " << endl << endl;
        float n=0, cont=1;
        int signo=1;
        double pi=0;
        cout << "Ingrese el numero de elementos a usar en la aproximacion: " << endl;
        cin >> n;

        for(int i=1; i<=n; i++){      //Obtengo la sucesion (1-(1/3)+(1/5)...) segun la aproximacion deseada
            pi=pi+((1/cont)*signo);   //Utilizo cont como denominador y a signo para ir alternando el signo
            cont+=2;                  //Aumento 2 al denominador para el proximo ciclo
            signo*=-1;                //Cambio el signo para el prosimo ciclo
        }
        pi*=4;
        cout << "pi es aproximadamente: " << pi << endl;
        num=-1;
    }

    else if(num==29){
        cout << "Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario. " << endl << endl;
        int n=0, inf=1, sup=100;
        char c;
        n=inf+rand()%(sup-inf+1);                         //Genero numero aleatorio para dar inicio
        cout << "Empieza en :" << n << endl;
        while(c!='='){
            cout << "El numero es menor '<', mayor '>' o igual '='?" << endl;
            cin >> c;
            if(c=='>') inf=n+1;                     //Si me dice que es mayor, entonces este queda como limite inferior
            else if(c=='<') sup=n-1;                //Si me dice que es menor, ahora este será el límite superior
            else if(c=='=')  break;                 //Si me dice que es igual salga del ciclo
            n=inf+rand()%(sup-inf+1);               //Genero un numero aleatorio en el nuevo rango
            cout << "El numero es? " << n << endl;
        }
        cout << "El numero es: " << n << endl;
        num=-1;

    }

    else if(num==30){
        cout << " Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine." << endl << endl;
        unsigned int n=0, in=0;
        n=1+rand()%(100);
        while(in!=n){
            cout << "Ingreseun numero: " << endl;
            cin >> in;
            if(in<n) cout << "El numero es mayor" << endl;
            else if(in>n) cout << "El numero es menor" << endl;
            else cout << "Felicitaciones, el numero es:" << n << endl;
        }
        num=-1;
    }
    else if(num==31){
        cout << "Escriba un programa que identique si un carácter ingresado es una vocal, una consonante o ninguna de las 2" << endl << endl;
        char c;
        cout << "Ingrese un caracter: " << endl;
        cin >> c;
        if(c>=65&&c<=90){
            if(c!='A' && c!='E' && c!='I' && c!='O' && c!='U')       //Verifico si no es una vocal mayuscula
                cout << c << " es una consonante." << endl;
            else cout << c << " es una vocal." << endl;
        }

        else if(c>=97&&c<=122){
            if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')       //Verifico si no es una vocal minuscula
                cout << c << " es una consonante." << endl;          //Si no lo es entonces es una consonante
            else cout << c << " es una vocal." << endl;
        }
        else cout << c << " no es una letra." << endl;               //Si no es ninguna, entonces no es una letra
        num=-1;


    }

    else if(num==32){
        cout << "Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada." << endl << endl;
        int n=0;
        int BI[]={50000, 20000, 10000, 5000, 2000, 1000};
        int MO[]={500, 200, 100, 50};
        cout << "Ingrese la cantidad de dinero: " << endl;
        cin >> n;

        for(int i=0; i<6; i++){
            cout << BI[i] << ":" << n/BI[i] << endl;       //Saco la cantidad de billetes del valor en pos(i).
            n=n-(n/BI[i])*BI[i];                           //Resto el valor al total
        }
        for(int j=0; j<4; j++){                            //Saco la cantidad de monedas de la denominacion i.
            cout << MO[j] << ":" << n/MO[j] << endl;
            n=n-(n/MO[j])*MO[j];                           //Resto a la cantidad inicial.
        }
        cout << "Faltante: " << n << endl;
        num=-1;


    }

    else if(num==33){
        cout << " Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos." << endl << endl;
        int dia, mes;
        cout << "Ingrese el mes: " << endl;
        cin >> mes;
        cout << "Ingrese el dia del mes: " << endl;
        cin >> dia;

        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){               //Verifico si es un mes de 31
            if(dia<=31 && dia>=1) cout << dia << "/" << mes << " es una fecha valida." << endl; // si el dia esta entre 1 y 31 es valido
            else cout << dia << "/" << mes << " es una fecha invalida." << endl;                // si no no es valido
        }
        else if(mes==4 || mes==6 || mes==9 || mes==11){                                         //Verifico si es un mes de 30
            if(dia<=30 && dia>=1) cout << dia << "/" << mes << " es una fecha valida." << endl; //si el dia esta entre 1 y 30 es valido
            else cout << dia << "/" << mes << " es una fecha invalida." << endl;                // si no invalido
        }
        else if(mes>12 || mes<1) cout << mes << " No es un mes valido." << endl;                //Si el mes no esta entre 1 y 12 no vale
        else if(mes==2){
            if(dia==29) cout << dia << "/" << mes << " valido en bisiesto." << endl;
            else if(dia>=1 && dia<=28) cout << dia << "/" << mes << " es una fecha valida." << endl;   //Condicion por si el mes es 12 para bisiestos
            else cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
        num=-1;

    }

    else if(num==34){
        cout << " Escriba un programa para leer dos números enteros con el signicado dado." << endl << endl;
        unsigned int h1=0, h2=0;
        int ht=0, mt=0, st=0;
        cout << "Ingrese un entero con la hora: " << endl;
        cin >> h1;
        cout << "imgrse un entero con el tiempo transcurrido: " << endl;
        cin >> h2;

        int ss1=0, ss2=0, mm1=0, mm2=0, hh1=0, hh2=0;

        ss1=h1/100;
        ss2=h2/100;
        h1/=100;
        h2/=100;
        mm1=h1/100;
        mm2=h2/100;
        h1/=100;
        h2/=100;
        hh1=h1/100;
        hh2=h2/100;



        if(ss1>=60 || ss2>=60 || mm1>=60 || mm2>=60 || hh1>=60 || hh2>=60) cout << "El tiempo ingresado es invalido." << endl;
        else {
            st=ss1+ss2;
            while(st>=60){
                st-=60;
                mt++;
            }
            mt+=mm1+mm2;
            while(mt>=60){
                mt-=60;
                ht++;
            }
            ht+=hh1+hh2;
        }
        cout << "La hora es: " << ht << mt << st << endl;
        num=-1;


    }

    else if(num==35){
        cout << " Escriba un programa que muestre el siguiente patrón en la pantalla: " << endl << endl;
        unsigned long int n=0;
        cout << "Ingrese un numero entero impar: " << endl;
        cin >> n;
        int inf=n/2, sup=n/2;     //Defino unos limites que empiezan en la mitad

        for(int i=0; i<=n; i++){             //ciclo anidado para recorrer cun cuadrado de nxn
            for(int j=0; j<=n; j++){
                if(j>inf && j<sup) cout << "+";       //Si estoy dentro de los limites escribo +
                else cout << " ";                     //Si no escribo un espacio
            }
            if(i<=n/2){                               //Si aun no he llegado a la mitad de las filas decremento el inferior y aumento el superior
                inf--;
                sup++;
            }
            else{                                     //Si estoy mas arriba de la mitad, invierto.
                inf++;
                sup--;
            }

            cout << endl;                        //Imprimo un salto de linea para cambiar de renglon
            num=-1;
        }
    }

    else if(num==36){
        cout << " Escriba un programa que encuentre el valor aproximado del número de euler en basea la siguiente suma innita: " << endl << endl;
        double euler=1;
        double elementos=0, factorial=1;
        cout << "Ingrese la cantidad de elementos (>0) con que desea aproximar euler: " << endl;
        cin >> elementos;

        for(int i=1; i<elementos; i++){       //Voy sumando elementos en cada interaccion
            factorial*=i;                     //Voy llevando el factorial
            euler+=1/factorial;               //Sumo un elemento

        }

        cout << "Euler es aproximadamente: " << euler << endl;
        num=-1;
    }

    else if(num==37){
        cout << "Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n." << endl << endl;
        unsigned long int n=0, t1=1, t2=0, fibonacci=1, sumatoria=0;
        cout << "Ingrese el numero hasta el cual desea sumar los pares de la serie: " << endl;
        cin >> n;

        while(fibonacci<=n){              //Mientras el numero en la sucesion sea menor al ingresado
            fibonacci=t1+t2;              //Sumo el termino anterioir al actual en la sucesion
            t2=t1;                        //convierto el primer termino en el segundo
            t1=fibonacci;                 //Tomo el actual termino en la sucesion para continuar con la suma

            if(fibonacci%2==0) sumatoria+=fibonacci;       //Si el termino es par, lo agrego a la suma

        }
        cout << "El resultado de la suma es: " << sumatoria << endl;
        num=-1;
    }

    else if(num==38){
        cout << " Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c." << endl << endl;
        int a=0, b=0, c=0, sumatoria=0, cont=0;
        cout << "Ingrese el primer numero:" << endl;
        cin >>a;
        cout << "Ingrese el segundo numero:" << endl;
        cin >>b;
        cout << "Ingrese el tercer numero:" << endl;
        cin >>c;

        while(a%cont<c){

        }

        cout << "La suma es: " << sumatoria << endl;
        num=-1;


    }

    else if(num==39){
        cout << " Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos." << endl << endl;
        unsigned long int n=0, d=0, sumatoria=0, potencia=1;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;

        while(n>0){                    //Mientras aun tenga digitos para sacar de N
           d=n%10;                     //Extraigo el ultimo digito
           n/=10;                      //Remuevo el ultimo digito de N
           for(int i=0; i<d; i++){     //Este ciclo se ejecutará la cantidad de veces que indique el digito
               potencia*=d;            //Multiplico el valor del digito por si mismo n veces para obtener la potencia
           }
           sumatoria+=potencia;        //Agrego esta potencia a la sumatoria
           potencia=1;                 //Reinicio la variable potencia para el proximo ciclo

        }
        cout << "La suma es: " << sumatoria << endl;
        num =-1;
    }

    else if(num==40){
        cout << "Escriba un programa que reciba un número n e imprima el enésimo número primo." << endl << endl;
        int n=0, aux=0, cont1=1, cont2=0;
        cout << "Ingrese un numero entero: " << endl;
        cin >> n;

        while(n>cont2){                               //Se ejecuta hasta que encontremos la posicion N en los primos
            for(int i=1; i<=cont1; i++){              //Voy recorriendo todos los numeros para ir sacando los primos
                if(cont1%i==0) aux++;                 //Si es divisor, sume a la auxiliar
            }
            if(aux==2) cont2++;                       //Si aux es igual a 2, entonces es primo
            cont1++;                                  //Encotramos una posicion de los primos
            aux=0;                                    //Reiniciamos la variable
        }

        cout << "El primo numero " << n << " es: " << cont1-1 << endl;
        num=-1;
    }
    else if(num==41){
        cout << "SIN TERMINAR" << endl << endl;
        num=-1;
    }

    else if(num==42){
        cout << " Escriba un programa que calcula el máximo factor primo de un número." << endl << endl;
        int n=0, aux=0, mayor=0;
        cout << "Ingrese un  numero entero: " << endl;
        cin >> n;

        for(int i=1; i<n; i++){                   //Recorro desde 1 hasta N
            if(n%i==0){                           //Si i es divisor de N, entonces es factor
                for(int j=1; j<=i; j++){          //Con este ciclo verifico si es primo
                    if(i%j==0) aux++;
                }
                if(aux==2) mayor=i;               //Si es primo lo almaceno como mayor
                aux=0;
            }
        }

        cout << "El mayor factor primo de " << n << " es: " << mayor << endl;
        num=-1;
    }

    else if(num==43){
         cout << "Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado: " << endl << endl;
         unsigned int n=0, sumatoria=0, cont1=0, aux=0;
         cout << "Ingrese un numero: " << endl;
         cin >> n;

         while(cont1<n){                               //Mientras el primo en el que estoy sea menor que el N ingresado
             for(int i=1; i<=cont1; i++){              //Voy recorriendo todos los numeros para ir sacando los primos
                 if(cont1%i==0) aux++;                 //Si es divisor, sume a la auxiliar
             }
             if(aux==2 && cont1<n) sumatoria+=cont1;                       //Si aux es igual a 2, entonces es primo y lo agrego a la suma
             cont1++;                                                      //aumento para verificar si el siguiente es primo
             aux=0;                                                        //Reinicio la variable
         }

         cout << "El resultado de la suma es: " << sumatoria << endl;
         num=-1;


    }

    else if(num==44){
        cout << "SIN TERMINAR :(" << endl << endl;
        num=-1;
    }

    else if(num==45){
        cout << "SIN TERMINAR :(" << endl << endl;
        num=-1;
    }

    else if(num==46){
        cout << "SIN TERMINAR :(" << endl << endl;
        num=-1;
    }

    else if(num==47){
        cout << "SIN TERMINAR :(" << endl << endl;
        num=-1;
    }



  }

    return 0;
}

