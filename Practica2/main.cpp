#include <mylib.h>




int main()
{

    int flat;
    cout << "Ingrese el numero del problema (0 para terminar): " << endl << endl;
    cin >> flat;

    while(flat!=0){
        if(flat==-1){
            cout << "Ingrese el numero del problema (0 para terminar): " << endl << endl;
            cin >> flat;
        }

        else if(flat==1){
            cout << "Problema 1: Se necesita un programa que permita determinar la mínima combinación de billetes y monedas" << endl;
            cout << "para una cantidad de dinero determinada." << endl << endl;

            int c[10]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
            int n,b;                              //n almacenará la cantidad que queda despues de entregar un billete o moneda y b la cantidad a entregar
            int *p=c;                             //P apunta al arreglo de denominaciones
            cout << "Ingrese la cantidad a calcular: " << endl;
            cin >> n;
            //cout << l << endl;

            while(n>=50){                        //Mientras aun haya mas de 50 por entregar
                for(int i=0; i<10; i++){         //Ciclo para recorrer el arreglo denominaciones
                    b=n/(*(p+i));                //Calculo la cantodad de billetes o monedas a entregar
                    if(n>=999){                  //Si hay mas de 1000 digo que son billetes
                        cout << "Billetes de " << *(p+i) << " " << b << endl;
                    }
                    else{
                        cout << "Monedas de " << *(p+i) << " " << b << endl;     //Si hay menos de 1000 digo que son monedas
                    }
                    n=n-(b*(*(p+i)));                                            //Resto la cantidad entregada


            }
            cout << "Faltante: " << n << endl;
            flat=-1;


        }
        }

        else if(flat==2){
            cout << "Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima" << endl;
            cout << "este arreglo y luego imprima cuantas veces se repite cada letra en el arreglo." << endl << endl;

            int c=0;
            char A[200],la,lb;
            char *l=A;
            srand(time(NULL));

            for(int i=0; i<200; i++){                     // Ciclo para crear el array aleatorio.
                *(l+i)= 65+rand()%(91-65);
            }
            cout << A << endl;                            //Imprimir array generado.
            cout << endl;

            for(int j=65; j<=90; j++){                   // -Ciclo que itera entre 65 y 90 correspondientes a
                la=j;                                    //  las mayusculas en la tabla ASCII.
                for(int k=0; k<200; k++){                // -Este ciclo itera sobre cada uno de los elementos del
                    lb=*(l+k);                              //  array y lo compara con cada letra para determinar cantidad.
                    if(lb==la){
                        c++;
                    }
                }
                cout << la << ": " << c << endl;
                c=0;

            }
            flat=-1;


        }
    }



/*-----------------------------------------------------------------------------------------------------------
 * Ejercicio 1. Codiﬁque el programa que se muestra a continuación:
 * Con ayuda del debugger, examine la representación en memoria del
 * arreglo array y responda las siguientes preguntas.
 * Cuál es su dirección en memoria?
 * ¿Cuántos bytes se dedican para almacenar cada elemento de array?
 * Cuál es la dirección y el contenido en memoria del elemento array[3] ?
 * Describa el efecto que tiene la función fun_b, sobre el arreglo array.  */


    /*
        int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        fun_b(array, 10);
        cout << &array << endl;
        cout << (array+1) << endl;
        cout << &array[3] << endl;
        cout << array[3] << endl;
        for(int i=0; i<10; i++){
            cout << array[i] << " ";
        }
        */

        /*Respuestas:
         * Cual es la dirección de memoria de array?
         * R: 0x61fe20
         *
         * Cuantos bits de dedican para almacenar cada elemento de array?
         * R: Tenemos que array+1= 0x61fe24, por lo tanto podemos
         * deducir que cada elemeto ocupa 4 bytes.
         *
         * Cual es la dirección y el contenido en memoria de array[3]?
         * la dirección es: 0x61fe2c
         * su contenido es: 6.
         *
         * Describa el efecto que tiene la función fun_b, sobre el arreglo array
         *
         * La función b inicializa un puntero que apunta a array, en un ciclo,
         * se ingresan a la función a 2 puneros con las direcciones de la primera
         * y la ultima posición de array, esta función, invierte las posiciones y
         * luego gracias al ciclo se ingresan nuevamente a la función la segunda
         * y la penultima posicion del array para que se inviertan y así sucersivamente
         * hasta invertir completamente el array. */


/*---------------------------------------------------------------------------------------------
 * Ejercicio 2. La función que se ilustra a continuación calcula el promedio de los
 * elementos de un arreglo de tamaño n. promedio y suma apuntan a variables que la
 * función modiﬁca por referencia. Desafortunadamente, la función contiene errores;
 * encuéntralos y corrígelos, de tal manera que su operación sea correcta. */


    /*
        double s[5]={2.3, 0.0, 2.4, 8.0, 1.6};
        int a=5;
        double promedio=0.0;
        double suma=0.0;
        fun_c(s,a,&promedio,&suma);
        cout << "La suma es: " << suma <<endl;
        cout << "El promedio es: " << promedio << endl;

        */


/*------------------------------------------------------------------------------------------------------
 * Ejercicio 3. Se tiene la siguiente declaración e inicialización para el arreglo b:
 * unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};
 *
 * Determine de acuerdo a lo ilustrado en la Figura 1 el valor correspondiente de
 * las siguientes expresiones:
 *                                  Respuestas:
 *   °b                             =0x0A12
 *   °b+2                           =
 *   °(b+2)
 *   °(b+2)+1
 *   °*(*(b+2)+1)                   =39
 *   °b[3][1]                       =3
 *   °*b++
 * */

/*-----------------------------------------------------------------------------------------------------------
 * Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima
 * este arreglo y luego imprima cuantas veces se repite cada letra en el arreglo.
 * Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe
 * imprimir: ABARSECAAB
 * A: 4
 * B: 2
 * C: 1
 * Y así sucesivamente.   */


    /*

    */



/*-------------------------------------------------------------------------------------------------------------------------
 * Problema 3. Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero
 * si son iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas.
 * Escriba un programa de prueba.  */

    /*
    string p1,p2;
    bool i=false;
    cout << "Ingrese una palabra: " << endl;
    cin >> p1;
    cout << "Ingrese otra palabra: " << endl;
    cin >> p2;
    i = comp(p1, p2);
    if(i==true){
        cout << "Las palabras son iguales." << endl;
    }
    else{
        cout << "las palabras no son iguales. " << endl;
    }
    */




/*-----------------------------------------------------------------------------------------------------------
 * Problema 4. Haga una función que reciba una cadena de caracteres numéricos, la convierta
 * a un número entero y retorne dicho número. Escriba un programa de prueba.
 * Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.  */

  /*
  string a;
  int n;
  cout << "Ingrese la cadena numerica: " << endl;
  cin >> a;
  n=conv1(a);
  cout << "El numero es: " << n << endl;
  cout << "Su mitad es aproximadamente: " << n/2 << endl;

  */


/*-----------------------------------------------------------------------------------------------------------
 * Problema 5. Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres.
 * Use parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
 * Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.  */

    /*
    int n,p,i=0;
    char c;
    char a[]={};
    char *pa=a;
    cout << "ingrese un numero: " << endl;
    cin >> n;
    while(n>0){
        p=n%10;
        n/=10;
        c=char(p+48);
        a[i]=c;
        i++;
    }
    */



/*-------------------------------------------------------------------------------------------------------
 * Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras
 * minúsculas por mayúsculas, los demás caracteres no deben ser alterados.
 * Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
 * Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA. */

    /*
    string a,b;
    int l;
    cout << "Ingrese la palabra: " << endl;
    cin >> a;

    b=a;

    l= a.size();
    for(int i=0; i<l; i++){
        if(a[i]>='a' and a[i]<='z'){
            a[i]=a[i]-('a' - 'A');
        }
    }
    cout << "original: " << b << endl;
    cout << "En mayuscula: " << a << endl;
    cout << endl;

    */

/*----------------------------------------------------------------------------------------------------
 * Problema 7. Escriba un programa que reciba una cadena de caracteres y elimine los
 * caracteres repetidos.
 * Ejemplo: se recibe bananas debe mostrar bans.
 *  Nota: la salida del programa debe ser: Original: bananas. Sin repetidos: bans. */

    /*
    string c={},ns={},la,lb;
    int l,ll,s;
    cout << "Ingrese la palabra" << endl;
    cin >> c;
    lb=c[0];
    ns=ns+lb;
    l=c.size();    
    for(int i=1; i<l; i++){
        la=c[i];
        ll=ns.size();
        s=0;
        for(int j=0; j<ll; j++){
            lb=ns[j];
            if(la==lb){
                s++;
            }
        }
        if(s==0){
            ns=ns+la;
        }
    }
    cout << ns << endl;
    */



/*-----------------------------------------------------------------------------------------------------
 * Problema 8. Escriba unprograma que reciba una cadena de caracteres y separe los números
 * del resto de caracteres, generando una cadena que no tiene números y otra con los números
 * que había en la cadena original.
 * Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
 * Nota: la salida del programa debe ser: Original: abc54rst. Texto: abcrst. Numero: 54.  */


    /*
    string a,b,c;
    int l;

    cout << "Ingrese la palabra: " << endl;
    cin >> a;
    l=a.size();
    for(int i=0; i<l; i++){
        if(a[i]>='a' and a[i]<='z'){
            b=b+a[i];
        }
        else if(a[i]>='A' and a[i]<='Z'){
            b=b+a[i];
        }
        else if(a[i]>='0' and a[i]<='9'){
            c=c+a[i];
        }
    }
    cout << "Original: " << a << endl;
    cout << "Texto: " << b << endl;
    cout << "Numeros: " << c << endl;

    */

/*---------------------------------------------------------------------------------------------------
 * Problema 9. Escribir un programa que reciba un número n y lea una cadena de
 * caracteres numéricos, el programa debe separar la cadena de caracteres en
 * números de n cifras, sumarlos e imprimir el resultado. En caso de no poderse
 * dividir exactamente en números de n cifras se colocan ceros a la izquierda del
 * primer número. Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
 * Nota: la salida del programa debe ser: Original: 87512395. Suma: 994.  */

    /*
    int n,num2,num3,m=1,s=0;
    long long int num;
    string a;
    cout << "ingrese un numero: " << endl;
    cin >> n;
    cout << "ingrese la cadena de numeros: " << endl;
    cin >> a;
    num=stoll(a);
    num3=num;
    while(n>0){
       m=m*10;
       n--;
    }
    while(num>0){
        s=s+num%m;
        num=num/m;
    }
    cout << "Original: " << num3 << endl;
    cout << "Suma: " << s << endl;

    */




/*----------------------------------------------------------------------------------------------------
 * Problema 10. Escribir un programa que permita convertir un número en el
 * sistema romano al sistema arábigo usado actualmente. A continuación se
 * encuentran los caracteres usados en el sistema romano y su equivalente
 * arábigo:
 * M: 1000
 * D: 500
 * C: 100
 * L: 50
 * X: 10
 * V: 5
 * I: 1
 * Los números romanos se forman usando estos caracteres en base a
 * dos reglas: Si un carácter esta seguido por uno de igual o menor valor,
 * su valor se suma al total. Si un carácter esta seguido por uno de
 * mayor valor, su valor se resta del total.
 * Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
 * Nota: la salida del programa debe ser: El número ingresado fue: DCLXVI Que corresponde a: 666. */


    /*
    string c;

    int l,r,n,s=0;
    string m,w;
    cout << "Ingrese el numero romano: " << endl;
    cin >> c;
    l=c.size();
    int a[l];
    int *p=&a[0];
    for(int q=0; q<l; q++){
        m=c[q];
        for(int t=0; t<l; t++){
            w=c[t];
            if(m==w){
                s++;
            }
        }
    }
    s=0;
    for(int i=0; i<l; i++){
        m=c[i];
        if(m=="M"){
            r=1000;
        }
        else if(m=="D"){
            r=500;
        }
        else if(m=="C"){
            r=100;
        }
        else if(m=="L"){
            r=50;
        }
        else if(m=="X"){
            r=10;
        }
        else if(m=="V"){
            r=5;
        }
        else if(m=="I"){
            r=1;
        }

        *(p+i)=r;


    }
    int x=0;
    for(int j=l; j>=0; j--){
        n=*(p+(j-1));
        if(n<x){
            s=s-n;
        }
        else if(n>=x){
            s=s+n;
        }
        x=n;

    }
    cout << "El numero es: " << s << endl;
    */



/*--------------------------------------------------------------------------------------------------
 * Problema 11. Escriba un programa que permita manejar las reservas de
 * asientos en una sala de cine,los asientos de la sala de cine están
 * organizados en 15 ﬁlas con 20 asientos cada una. El programa debe
 * mostrar una representación de la sala que indique que asientos están
 * disponibles y cuales se encuentran reservados.
 * Además debe permitir realizar reservas o cancelaciones al ingresar
 * la ﬁla (letras A-O) y el número del asiento (números 1-20).       */


    /*
    bool c[300]={false},r=false;
    int b,n,j,x;
    char a,m,l='A';

    imp(c);

    while(r==false){
        cout << endl;
        cout << "Ingrese la letra de la fila que desea: " << endl;
        cin >> a;
        if(a>='a' and a<='z'){
            a=a-32;
        }
        cout << "ingrese el numero del asiento que desea: " << endl;
        cin >> b;
        b=b-1;
        m=a-64;
        n= int(m)-1;
        x=c[(n*20)+b];
        if(x==false){
              cout << endl;
              cout << "asiento libre!" << endl;
              cout << "Ingrese 0 para reservar: " << endl;
              cout << "ingrese 1 para salir:" << endl;
              cin >> j;
              if(j==0){
                  c[(n*20)+b]=true;
                  cout << "Reserva exitosa!" << endl;
                  imp(c);
                  l='A';
              }
              else if(j==1){
                      r=false;
                  }


        }
        else{
                cout << " XXX Aasiento ocupado, intente nuevamente XXX" << endl;
              }
    }
    */

/*---------------------------------------------------------------------------------------------------------------
 * Problema 12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que
 * la suma de los números encada columna, cada ﬁla y cada diagonal principal tienen como
 * resultado la misma constante. Escriba un programa que permita al usuario ingresar una
 * matriz cuadrada, imprima la matriz y veriﬁque si la matriz es un cuadrado mágico.  */


    /*
    int a,b=0,l,n,s=0,ss=0;
    cout << "Ingrese el numero de filas o columnas: " << endl;
    cin >> a;
    l=a*a;
    int c[a][a]={};
    int *p=&c[0][0];
    impm(p,a);
    int i=0;
    int filas[a]={};
    int columnas[a]={};
    int diagonales[a]={};
    int *pf=&filas[0], *pc=&columnas[0], *pd=&diagonales[0];
    for(int i=0; i<a; i++){
        *(pf+i)=i;
        *(pc+i)=
    }
    while( i<l){
        cout << "ingrese valor: " << endl;
        cin >> n;
        *(p+i)=n;
        impm(p,a);
        i++;
    }
    n=0;
    */

/*------------------------------------------------------------------------------------------------------------
 * Problema 13. Se tiene una fotografía digitalizada de una porción de la galaxia NGC 1300
 * que está ubicada a 61.000.000 de años luz del planeta Tierra. La representación
 * digital de la imagen está constituida por una matriz de números enteros; en la cual,
 * cada uno representa la cantidad de luz en ese punto de la imagen, así: (1)
 * Se puede determinar si el elemento ai,j de la matriz representa una estrella si se cumple que:
 *
 *  ai,j + ai,j−1 + ai,j+1 + ai−1,j + ai+1,j  > 6
 * -----------------------------------------
 *                   5
 *
 *
 * Elabore y pruebe una función que reciba un puntero a la matriz de enteros como argumento
 * y que retorne el número de estrellas encontradas en la imagen. Ignore las posibles
 * estrellas que puedan existir en los bordes de la matriz. */


/*--------------------------------------------------------------------------------------------------------
 * Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y
 * la imprima, luego imprima la matriz rotada 90, 180 y 270 grados. */

    //SI

    /*
    int c[5][5]={},d[5][5]={},e[5][5]={},f[5][5]={};
    int y=4;
    int *p=&c[0][0],*pd=&d[0][0],*pe=&e[0][0],*pf=&f[0][0];
    for(int i=0; i<25; i++){
        *(p+i)=i+1;
    }

    imp2(p);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            d[j][y]=c[i][j];

        }
        y--;
    }
    y=4;

    for(int k=0; k<5; k++){
        for(int l=0; l<5; l++){
            e[l][y]=d[k][l];

        }
        y--;
    }

    y=4;

    for(int m=0; m<5; m++){
        for(int n=0; n<5; n++){
            f[n][y]=e[m][n];

        }
        y--;
    }

    cout << endl << endl;
    cout << "Matriz rotada 90: " << endl << endl;
    imp2(pd);
    cout << endl;
    cout << "Matriz rotada 180: " << endl << endl;
    imp2(pe);
    cout << endl;
    cout << "Matriz rotada 270: " << endl << endl;
    imp2(pf);

    */


/*----------------------------------------------------------------------------------------------------
 * Problema 17. Dos números a y b (a != b) son amigables si la suma de los divisores de a
 * (excluyéndose el mismo) es igual a b, y viceversa. Ej: los divisores de 220
 * son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284.
 * Los divisores de 284 son 1, 2, 4, 71 y 142; y suman 220.
 * Entonces 220 y 284 son amigables. Escribir un programa que reciba un
 * número y halle la suma de todos los números amigables menores al
 * número ingresado. Nota: la salida del programa debe ser: El resultado de la suma es: 504 */

    //NO

    /*
    int n,m=0,i=0,s=0,s2=0,c=0;
    cout << "Ingrese el numero: " << endl;
    cin>> n;
    int a[]={};

    for(m=0; m<n; m++){
        i=0;
        while(i<m){
            if(m%i==0){
                s+=i;
            }
            i++;
        }

        for(n=0; n>m; n--){
            i=0;
            while(i<n){
                if(n%i==0){
                    s2+=i;
                }
                i++;
            }
            if(s==s2){
                a[c]=s;
                c++;
            }
        }
    }

    for(int k=0; k<c; k++){
        cout << *(a+k) << endl;
    }
    */




    return 0;
}














