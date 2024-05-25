// Header file (Calculator.h)
#pragma once
#include <iostream>
class Calculator
{
    public :
        /*
            Function Add: adds two integers and returns the result
            Parameters a, b: the two integer input values
        */
        int Add(int a, int b);
        /*
            Function Add: adds two floats and returns the result
            Parameters a, b: the two float input values
        */
        float Add(float a, float b);
        float Subtract(float a, float b);
    private:
        void OutputResult(float, std::string, float, float);
};
