#ifndef PUNTO_H
#define PUNTO_H

class Punto {

private:
    double x, y;
public:
    Punto(double x = 0, double y = 0);
    void imprimir() const;
    double getX() const;
    double getY() const;

};
#endif