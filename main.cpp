
// Main file (main.cpp)
#include <iostream>
#include "Header Files/Calculator.h"
using namespace std;

void modifyValueUsingPointer(int* ptr) {
    *ptr = 10; // Modifies the value at the memory address pointed to by ptr
}

void modifyValueUsingReference(int& ref) {
    ref = 20; // Directly modifies the value referenced by ref
}

int main()
{
    cout << "My Calculations" << endl;
    Calculator calc;
    float input1, input2;

    // Example usage of pointers
    int number = 5;
    int* ptr = &number; // 'ptr' is a pointer to 'number'
    cout << "Initial value of number: " << number << endl; // Outputs 5
    modifyValueUsingPointer(ptr); // Passes the address of 'number' to the function
    cout << "Value of number after modifyValueUsingPointer: " << number << endl; // Outputs 10

    // Example usage of references
    modifyValueUsingReference(number); // Passes 'number' directly to the function
    cout << "Value of number after modifyValueUsingReference: " << number << endl; // Outputs 20

    while (true)
    {
        cout << "Input the first value (0 to exit): ";
        cin >> input1;
        if (input1 == 0) // Exit if the user enters 0
        {
            break;
        }
        cout << "Input the second value (0 to exit): ";
        cin >> input2;
        if (input2 == 0) // Exit if the user enters 0
        {
            break;
        }

        int a = static_cast<int>(input1);
        int b = static_cast<int>(input2);
        if (a == input1 && b == input2)
        {
            int result = calc.Add(a, b);
            cout << "Integer addition: "
                 << a << " + " << b << " = "
                 << result
                 << std::endl;
        }
        else
        {
            float result = calc.Add(input1, input2);
            cout << "Float addition: "
                 << input1 << " + " << input2 << " = "
                 << result
                 << std::endl;
        }
    }
    std::cout << "Finished!" << std::endl;
    return 0;
}