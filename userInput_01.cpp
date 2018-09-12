
#include <iostream>
#include <limits>

int main(){

    int number;

    std::cout << "Input a number: ";
    std::cin >> number;

    while( std::cin.fail() ){

        std::cout << "Wrong value try again!" << std::endl;
        std::cout << "Input a number: ";

        std::cin.clear(); //resets error flag on the stream
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> number;
    }
    std::cout << "You input " << number << std::endl;

    return 0;
}