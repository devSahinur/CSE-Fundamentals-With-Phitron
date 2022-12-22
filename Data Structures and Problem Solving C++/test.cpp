#include <iostream>

int main()
{
    int arr[50][45];
    int *p = &arr[0][0]; // p points to the base address of the array

    std::cout << "Base address: " << p << std::endl;
    std::cout << "Location of arr[6][13]: " << &arr[6][13] << std::endl;

    return 0;
}
