
// Implementation file (Calculator.cpp)
#include "../Header Files/Calculator.h"

Calculator::Calculator()
{
      _name = "Addition Calculator";
}
string Calculator::GetName()
{
      return _name;
}

float Calculator::Add(float a, float b)
{
      float result = a + b;
      OutputResult(a, " + ", b, result);
      return result;
}

int Calculator::Add(int a, int b)
{
      return a + b;
}

float Calculator::Subtract(float a, float b)
{
      float result = a - b;
      OutputResult(a, " - ", b, result);
      return result;
}

void Calculator::OutputResult(float a, std::string op, float b, float result)
{
      std::cout << "Calculator: "
                << a << op << b << " = " << result << "\n";
}