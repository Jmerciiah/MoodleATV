#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x, y, z;

    
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

   
    double valorCurva = 5 * x + 2;
    string ladoCurva = (y > valorCurva) ? "acima da curva" :
                       (y < valorCurva) ? "abaixo da curva" :
                       "na curva";
    
    cout << "O ponto (" << x << ", " << y << ") está " << ladoCurva << " f(x) = 5x + 2." << endl;

    
    double distanciaEuclidiana = sqrt(x * x + y * y);

    
    z = x * y;
    cout << "O produto de x e y em notação científica: " << scientific << z << endl;

    
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << distanciaEuclidiana << endl;

    return 0;
}