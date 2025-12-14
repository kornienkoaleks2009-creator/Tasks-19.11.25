#include <iostream>
    int main(){
        int width;
        int height;

        std::cout << "Insert width" << std::endl;
        std::cin >> width;
        std::cout << "Insert height" << std::endl;
        std::cin >> height; 
        std::cout << "width" <<  width << std::endl;
        std::cout << "height" << height << std::endl;
        for (int i = 0; i < height; i++) {
    
             for (int k = 0; k < width; k++) {
                  std::cout << "*";
        }
        std::cout << std::endl; 
    }

    }
