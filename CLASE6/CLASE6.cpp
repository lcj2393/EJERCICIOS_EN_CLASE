#include <stdio.h>
#include <iostream>

#define modulo (a,b) a%b

using namespace std;

typedef enterito;

int main()
{
    int num1=5;
    float num2=3.56;
    double num3=14.09999999;
    char letra='a';
    cuadrado (num1);
    cuadrado (num2);
    cuadrado (num3);

    return 0;
}

template <class Num>
void cuadrado(Num numerito){
cout<<numerito<<endl;

}
