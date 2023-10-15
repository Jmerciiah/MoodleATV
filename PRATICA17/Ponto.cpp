#include <iostream>
#include <cmath>

class Ponto {
private:
    double x;
    double y;

public:
    
    Ponto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    
    void setX(double xCoord) {
        x = xCoord;
    }

    void setY(double yCoord) {
        y = yCoord;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }


    double calcularDistanciaOrigem() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
   
   Ponto ponto1(3, 4);

 
    double xCoord = ponto1.getX();
    double yCoord = ponto1.getY();

    
    double distanciaOrigem = ponto1.calcularDistanciaOrigem();

    std::cout << "Coordenadas do ponto: (" << xCoord << ", " << yCoord << ")" << std::endl;
    std::cout << "Distância até a origem: " << distanciaOrigem << std::endl;

    return 0;
}