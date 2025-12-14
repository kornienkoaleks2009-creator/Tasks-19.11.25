#include <iostream>
	int main(){
        double vartist;
        double znizhka;

        std::cout << "Vvedit sumu pokypku:" << std::endl;
        std::cin >> vartist;
            if (vartist >= 500 && vartist <= 999){
                znizhka = (vartist / 100) * 3;
            } else if(vartist >= 1000){
                znizhka = (vartist / 100) * 5;
            } else{
                znizhka = 0;
                std::cout << "vash tovar < 500grn" << std::endl;
            }
        std::cout << "Vasha znizhka byde = " << znizhka << std::endl;
        vartist = vartist - znizhka;
        std::cout << "Cina tovaru = " << vartist << std::endl;
}
