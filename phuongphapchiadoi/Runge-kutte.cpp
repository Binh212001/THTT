#include <iostream>

// Define the function f(x, y)
double f(double x, double y) {
    return 1.1 * x * y + x * x - x - 0.7 * y - 1.8;
}

 
int main() {
    double x_values[] = {-1.1, -0.9, -0.75, -0.7, -0.5, -0.35, -0.3, -0.1, 0};
   
    double y0 = 0.7;
    
    for (int i=0 ; i<=7; i++) {
        double h = x_values[i+1]-x_values[i];
        double k1, k2, k3, k4;

    k1 = h * f(x_values[i], y0);
    k2 = h * f(x_values[i] + h / 2, y0 + k1 / 2);
    k3 = h * f(x_values[i] + h / 2, y0 + k2 / 2);
    k4 = h * f(x_values[i] + h, y0 + k3);
    double denta =(double) 1/6*(k1+2*k2+2*k3+k4);
    std::cout << " x = " << x_values[i] << ":\n";
    std::cout << " ddenta = " << denta << ":\n";   
    y0= y0+denta;
    std::cout << " y_next = " << y0 << ":\n";
    std::cout << "k1 = " << k1 << ", k2 = " << k2 << ", k3 = " << k3 << ", k4 = " << k4 << ", h = " << h << "\n\n";
       
    }
    
    
    return 0;
}
