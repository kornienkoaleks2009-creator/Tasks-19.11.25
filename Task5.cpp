#include <iostream>
int main(){
    int lastnumber;
    int width;
    int firstnumber = 1;
    int rows = 0;
        std::cout << "Write number, which you want the snake to be. " << std::endl;
        std::cin >> lastnumber;
        std::cout << "Write number, how many num do you want horizontally " << std::endl;
        std::cin >> width;
            while (firstnumber <= lastnumber)
            {
                
                    if (rows % 2 == 0)
                    {
                        for (int f = 0; f < width && f <= lastnumber; f++)
                        {
                            std::cout << firstnumber << " ";
                            firstnumber++;
                        }
                    }
                    else {
                        int startrow = firstnumber + width - 1; 
                        for (int g = 0; g < width; g++)
                        {
                            if (startrow - g <= lastnumber)
                            {
                                std::cout << startrow - g << " ";
                            }
                        }                   
                        firstnumber = firstnumber + width;
                    }
                    std::cout << std::endl;
                    rows++;
                
            }
        return 0; 
}
