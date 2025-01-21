#include <iostream>
#include <limits>
#include <string>

void helpPanel()
{
    std::cout << "For addition, type '+'.\n";
    std::cout << "For subtraction, type '-'.\n";
    std::cout << "For multiplication, type '*'.\n";
    std::cout << "For division, type '/'.\n";
    std::cout << "For modulus, type '%'.\n";
}

char getOperator()
{
    while(true)
    {
        std::cout << "Type here operation: ";
        char op {};
        std::cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
            return op;

        std::cerr << "Invalid operator. Please enter one of '+', '-', '*', '/', '%'.\n";
    }
}

float getInput()
{
    while(true)
    {
        std::cout << "Enter a number: ";
        float number {};
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid input. Please enter a numeric value.\n";
        }
        else
        {
            return number;
        }
    }
}

float calculator(char op, float x, float y)
{
    switch(op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0)
            {
                std::cerr << "Error: Cannot divide by zero!\n";
                return std::numeric_limits<float>::quiet_NaN();
            }
            return x / y;
        case '%':
            if (static_cast<int>(x) == x && static_cast<int>(y) == y)
                return static_cast<int>(x) % static_cast<int>(y);
            else
            {
                std::cerr << "Error: Modulus is only valid for integers!\n";
                return 0;
            }
        default:
            std::cerr << "Error: Invalid operator!\n";
            return 0;
    }
}

int main()
{
    helpPanel();

    char op {getOperator()};
    float x {getInput()};
    float y {getInput()};

    float result = calculator(op, x, y);

    std::cout << "Result: " << result << '\n';

    return 0;
}
