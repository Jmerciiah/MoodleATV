#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b, c, x;

    
    cout << "Digite o coeficiente a: ";
    cin >> a;

    cout << "Digite o coeficiente b: ";
    cin >> b;

    cout << "Digite o coeficiente c: ";
    cin >> c;

    
    double delta = b * b - 4 * a * c;

   
    if (delta > 0) {
        
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais: " << raiz1 << " e " << raiz2 << endl;
    } else if (delta == 0) {
        
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real (raiz dupla): " << raiz << endl;
    } else {
      
        cout << "O polinômio não tem raízes reais." << endl;
    }

    cout << "Digite um valor para x: ";
    cin >> x;

    double px = a * x * x + b * x + c;
    cout << "p(x) = " << px << endl;

    return 0;
}