#include <iostream>

using namespace std;

int main() {
    double x, y;
    

    cout << "Digite o valor de x: ";
    cin >> x;
    
    cout << "Digite o valor de y: ";
    cin >> y;
    
    
    string quadrante = (x > 0 && y > 0) ? "primeiro quadrante" :
                       (x < 0 && y > 0) ? "segundo quadrante" :
                       (x < 0 && y < 0) ? "terceiro quadrante" :
                       (x > 0 && y < 0) ? "quarto quadrante" :
                       (x == 0 || y == 0) ? "sobre um dos eixos" :
                       "ponto de origem";
    
    
    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;
    
    return 0;
}