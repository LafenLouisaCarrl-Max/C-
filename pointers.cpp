#include <iostream>
using namespace std;

int main(){
    int age = 25; // This is a normal variable holding the value 25
    int *ptr = &age; // This is a variable, ptr, holding the address of age

    cout << "The adress of age: " << ptr << endl;
    cout << "The content of the address, ptr: " << *ptr << endl;
    cout << &ptr << endl;

   
}


