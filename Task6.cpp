#include <iostream>
#include <cmath>

	int main(){
		double a, b, c;
        double D;
        double x1, x2;
        
        std::cout << "ax^2 + bx + c = 0" << std::endl;
        std::cout << "write a:" << std::endl;
        std::cin >> a;
        std::cout << "write b:" << std::endl;
        std::cin >> b;
        std::cout << "write c:" << std::endl;
        std::cin >> c;

        D = b * b - 4 * a * c;
        if (D > 0){
            x1 = (-b - std::sqrt(D)) / (2 * a);
            x2 = (-b + std::sqrt(D)) / (2 * a);

            std::cout << "D>0 and we have two roots:" << std::endl;
            std::cout << "X1: " << x1 << std::endl;
            std::cout << "X2: " << x2 << std::endl;
        }
        else if (D == 0){
            x1 = -b / (2 * a);
            

            std::cout << "D=0 and we have one root:" << std::endl;
            std::cout << "X1: " << x1 << std::endl;
        }
        else {
            std::cout << "D<0 and we have no roots" << std::endl;
        }
        return 0;
}
