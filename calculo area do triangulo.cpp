#include <iostream>
#include <math.h>
using namespace std;

// formula pra calcular as areas dos triangulos
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //pede pro usuario digitar as medidas dos lados do traingulo X
    cout << "Digite as medidas dos lados do triângulo X (separados por espaço): ";
    cin >> xa >> xb >> xc;
    
    // pede pro usuario inserir as medidas dos lados do triangulo Y
    cout << "Digite as medidas do triângulo Y (separados por espaço): ";
    cin >> ya >> yb >> yc;
    
    //calcula a area dos triangulos X e Y
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //mostra o resultado de cada triangulo calculado
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    //mensagens de acordo com as condições dos triangulos
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    } else if (areaY > areaX) {
        cout << " O triângulo Y tem a maior área." << endl;
    } else {
        cout << "Os triângulos têm a mesma área." << endl;
    }

    return 0;
}