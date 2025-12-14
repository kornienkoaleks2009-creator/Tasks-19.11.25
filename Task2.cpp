#include <iostream>
    int main(){
        std::cout << "Insert your words: " << std::endl; 
        char * ourword;
        std::cin >> ourword;
        int countlength = 0;
            for (int i = 0; ourword[i] != '\0'; i++){
                countlength++;
            }
        std::cout << "string length:" << countlength << std::endl;
    }
