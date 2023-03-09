#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

#ifndef MYLIB_H
#define MYLIB_H

int conv1(string a){
    int n;
    n=stoi(a);
    return n;
}


bool comp(string a, string b){
    int l1 = a.size();
    int l2 = b.size();
    int c=0;
    if(l1==l2){
        for(int i=0; i<l1; i++){
            if(a[i]==b[i]){
                c++;
            }
        }
        if(c==l1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int ln(char c[]){
    int i;
    for(i=0; c[i]!='\0'; i++){

    }
    return i;

}

void imp(bool *p){
    cout << endl;
    cout << "R = Asiento reservado." << endl << endl;
    int c=0;
    for(int i=0; i<15; i++){
        cout << endl;
        char l;
        int n=65;
        l=char(n+i);
        cout << l << "    ";
        for(int j=0; j<20; j++){
            cout << j+1 << "|";
            if(*(p+c)==false){
                cout << " ";
            }
            else if(*(p+c)==true){
                cout << "R";
            }
            cout << "| ";
            c++;
        }

    }
    cout << endl << endl;
}

void impm(int *p, int a){
    int l=a*a;
    int c=0;
    cout << "Matriz M= " << endl;
    for(int i=0; i<a; i++){
        cout << "|";
        for(int j=0; j<a; j++){
            //cout << "
            if(*(p+c)==0){
                cout << "_ ";
            }
            else{
                cout << *(p+c)<< " ";
            }
            c++;
        }
        cout << "|";
        cout << endl;
    }

}

void imp2(int *p){
    int x=0;
    for(int j=0; j<5; j++){
        cout << "|";
        for(int k=0; k<5; k++){
            if(*(p+x)<10){
                cout << " " << *(p+x) << " ";
            }
            else{
                cout << *(p+x) << " ";
            }
            x++;
        }
        cout << "|" << endl;
    }
}

void fun_a(int *px, int *py){

    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam){

    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {

        fun_a(&b[f], &b[l]);
    }
}


void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++){
        *suma += *(a + i);
        *promedio = *suma / n;
}
}



#endif // MYLIB_H
