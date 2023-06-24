#include <iostream>

int main() {
    int num = 10;
    int* ptr;  // Declare a pointer variable

    ptr = &num;  // Assign the address of num to the pointer

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    // Changing the value using the pointer
    *ptr = 20;

    std::cout << "New value of num: " << num << std::endl;

    return 0;
}
