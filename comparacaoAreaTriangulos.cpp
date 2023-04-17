#include <iostream>
#include <cmath>
using namespace std;

//Funcao
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));}

int main() {
    double xa, xb, xc, ya, yb, yc, areaX, areaY;
    
    // Interface pedindo e registrando input do usuario para o primeiro triangulo
    cout << "Digite as medidas dos lados do triangulo separados por um espaco: ";
    cin >> xa >> xb >> xc;
    
    // Interface pedindo e registrando input do usuario para o segundo triangulo
    cout << "Digite as medidas dos lados do triangulo separados por um espaco: ";
    cin >> ya >> yb >> yc;
    
    //Utilizando a funcao criada anteriormente
    areaX = calcularAreaTriangulo(xa,xb,xc);
    areaY = calcularAreaTriangulo(ya,yb,yc);
    
    // Mostrando resultado das areas
    cout << "A area do triangulo X e " << areaX << endl;
    cout << "A area do triangulo Y e " << areaY << endl;
    
    // Mostrando resultado de comparacao
    if(areaX>areaY){
    cout << "A area do triangulo X e maior que a area do triangulo Y"<< endl;}
    else if(areaX<areaY){
    cout << "A area do triangulo Y e maior que a area do triangulo X"<< endl;}
    else{
    cout << "A area do triangulo X e Y sao iguais"<< endl;};
    return 0;
}