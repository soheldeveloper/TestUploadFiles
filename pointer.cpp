#include <iostream>

int main(){

    int var = 8;
    int* ptr_var = &var;
    *ptr_var = 10;
    int** ptr = &ptr_var;

    std::cout << var << std::endl;
    std::cout << ptr_var << std::endl;
    std::cout << ptr << std::endl;
return 0;
}
