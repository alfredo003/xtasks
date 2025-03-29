#include <iostream>
#include <unistd.h>


int main()
{
    int progress = 10;
    std::cout << "[";
 
    while(progress < 100)
    { 
        std::cout << "::" << std::flush;
        usleep(100000); 
        progress += 2;
    }  
    std::cout << "] 100%" << std::endl;
    return 0;
}