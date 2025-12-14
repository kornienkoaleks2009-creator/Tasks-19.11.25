#include <iostream>
    int main(){
        int width;
        int height;

        std::cout << "Insert width & height" << std::endl;
        std::cin >> width;
        if(width %2 == 0){
            std::cout << "Enter odd number (like 1/3/5...)" << std::endl;
            std::cin >> width;
        }
        height = width;

        std::cout << "width" <<  width << std::endl;
        std::cout << "height" << height << std::endl;
                                        // FIRST HALF

        int FirstNumberOFspaces = height / 2;  // 5/2 = 2
        int FirstNumberOFstars = 1;


        for (int i = 0; i < height / 2 + 1; i++) { // zabudu sho ce - ce verhnya polovuna
            for (int k = 0; k < FirstNumberOFspaces - i; k++) {
                  std::cout << " ";
            }
            for (int f = 0; f < FirstNumberOFstars + 2 * i; f++) {
                  std::cout << "*";
            }
        std::cout << std::endl; 
        }

                                        // SECCOND HALF

        int SeccondNumberOFspaces = 1;  
        int SeccondNumberOFstars = height - 2;       
        while (SeccondNumberOFstars >= 1){
            for (int k = 0; k < SeccondNumberOFspaces; k++) {
                  std::cout << " ";
            }
            for (int k = 0; k < SeccondNumberOFstars; k++) {
                  std::cout << "*";
            }
        std::cout << std::endl; 

        SeccondNumberOFspaces++;
        SeccondNumberOFstars -= 2;
    }  
    return 0; 
        
    

}
