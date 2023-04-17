#include <iostream>
#include <cmath>
using namespace std;

//Classe para triangulos
class Triangulo {
private:
    double a, b, c;
public:
    Triangulo(double lado1, double lado2, double lado3){
        a = lado1;
        b = lado2;
        c = lado3;
    }
    double calculaArea(){
        double p = (a+b+c) / 2.0;
        double area = sqrt(p*(p-a)*(p-b)*(p-c));
        return area;
    }
    double getLado1() {return a; }
    double getLado2() {return b; }
    double getLado3() {return c; }
};

int main() {
    double a, b, c;

	// Interface pedindo e registrando input do usuario para o primeiro triangulo
    cout << "Digite as medidas dos lados do triangulo X: ";
    cin >> a >> b >> c;
    Triangulo X(a,b,c);

    // Interface pedindo e registrando input do usuario para o segundo triangulo
    cout << "Digite as medidas dos lados do triangulo Y: ";
    cin >> a >> b >> c;
    Triangulo Y(a,b,c);
    
    //Utilizando funcao dentro da classe criada anteriormente
    double areaX = X.calculaArea();
    double areaY = Y.calculaArea();
    
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