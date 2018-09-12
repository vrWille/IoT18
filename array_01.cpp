/****************************************
* Filename: array_01.cpp
* 
* author: wille
* created: 2018- 09-12
* notes:
* 
* desc:
* 
* ver: 2018- 09-12 first version
* 
* 
* *************************************/
#include <iostream>
#include <ctime>

int main(){

    srand(time(0)); //random seed

    int items = 15;

    int arr_1[6] = {5, 4 ,7 , 3 ,8, -10};
    int arr_2[items];


    for(int i = 0; i < 6 ; i++){
        std::cout << arr_1[i] << ", ";
    }

    //fill arr_2
    for(int i = 0; i < items ; i++){
        arr_2[i] = rand() % 6 + 1; 
    }

    std::cout << std::endl;
    //print arr_2
    for(int i = 0; i < items ; i++){
        std::cout << arr_2[i] << ", ";
    }
    std::cout << std::endl;
    //print arr_2 reverse
    for(int i = items - 1; i >= 0  ; i--){
        std::cout << arr_2[i] << ", ";
    }


    return 0;

}