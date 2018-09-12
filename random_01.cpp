/****************************************
* Filename: random_01.cpp
* 
* author: wille
* created: 2018- 09-10
* notes:
* 
* desc:
* 
* ver: 2018- 09-10 first version
* 
* 
* *************************************/

#include <iostream>
#include <ctime>

int main(){
    int rows=10;
    int cols=7;
    int number = 0;
    srand(time(0)); //init random numbers
    
    for(int row = 0; row < rows; row++){
        std::cout << "\n"; 
        for( int col = 0; col < cols; col++){
            number = rand() % 100 + 1; // 1 - 100
            std::cout << number << "\t";
        }
    }
    return 0;
}