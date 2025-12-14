#include <iostream>
#include <cmath>
	int main(){
		double vspeed;
		double alpha;
		const double grafity = 9.8;
        const double pi = 3.1415;
        double L; 

		std::cout << "flight length calculation :)" << std::endl;
        std::cout << "write V (pochatkova shvidkist):" << std::endl;
        std::cin >> vspeed;
        std::cout << "write a: (degrees 0-90)" << std::endl;
        std::cin >> alpha;

        double alphaINradians = alpha * (pi/180);
        L = (vspeed * vspeed * std::sin(2 * alphaINradians)) / grafity;

        std::cout << "flight length = " << L << "meters" << std::endl;

        return 0;

}
