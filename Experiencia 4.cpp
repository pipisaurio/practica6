#include <iostream> 

using namespace std; 

class Vector2D { 

private: 

    double x; 
    double y; 

 

public: 

    Vector2D(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {} 

    double getX() const { return x; } 
    double getY() const { return y; } 

    Vector2D operator+(const Vector2D& vec) const {
        return Vector2D(x + vec.x, y + vec.y); 
    } 

    Vector2D operator-(const Vector2D& vec) const { 
        return Vector2D(x - vec.x, y - vec.y); 
    } 

    friend ostream& operator<<(ostream& os, const Vector2D& vec) { 
        os << "(" << vec.x << ", " << vec.y << ")"; 
        return os; 
    } 

}; 

int main() { 

    Vector2D v1(3.0, 4.0); 
    Vector2D v2(1.0, 2.0); 

    Vector2D suma = v1 + v2; 
    Vector2D resta = v1 - v2; 

    cout << "Vector1: " << v1 << endl; 
    cout << "Vector2: " << v2 << endl; 
    cout << "Suma: " << suma << endl; 
    cout << "Resta: " << resta << endl; 
    
    return 0; 

} 