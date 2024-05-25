#include <iostream>
#include "Header Files/Calculator.h"
using namespace std;
int main()
{
    Calculator calculator;//defines the calculator object
    cout << "My Calculations: " << calculator.GetName() << endl;
    float input1, input2;
    while (true)
    {
        cout << "Input the first value (0 to exit): ";
        cin >> input1;
        if (input1 == 0)//exit if the user enters 0
        {
            break;
        }
        cout << "Input the second value (0 to exit): ";
        cin >> input2;
        if (input1 == 0)//exit if the user enters 0
        {
            break;
        }
        int a = input1;
        int b = input2;
        if (a == input1 && b == input2)
        {
            int result = calculator.Add(a, b);
            cout << "Integer addition: " << a << " + " << b << " = "
                << result
                << std::endl;
        }
        else
        {
            float result = calculator.Add(input1, input2);
            cout << "float addition:" << input1 << " + " << input2 << " = "
                << result
                << std::endl;
        }
    }
    std::cout << "Finished!";
    return 0;
}