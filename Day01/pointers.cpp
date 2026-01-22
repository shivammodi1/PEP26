#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num; // it will store the address of num
    cout<< "Value of num: " << num << endl;
    cout<< "Address of num: " << &num << endl;
    cout<< "Value of ptr: " << ptr << endl;
    cout<< "Value pointed by ptr: " << *ptr << endl; // dereferencing the pointer(value at that address)
    cout<< "Address of ptr: " << &ptr << endl; // address of the pointer itself

    // increament the value using pointer
    *ptr ++;
    cout<< "Value of num after incrementing using pointer: " << num << endl;
}