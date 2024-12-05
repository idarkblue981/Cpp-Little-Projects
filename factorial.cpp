#include <iostream>

int factorial(int number)
{
    if (number == 1 || number == 0)
        return 1;
    
    else if (number > 1)
    {
        int result {1};
        for (int i = 2; i <= number; i++)
            result *= i;
        
        return result;
    }
    
    else
        return -1;
}

int main()
{
    std::cout << factorial(1) << '\n';    // 1
    std::cout << factorial(0) << '\n';    // 1
    std::cout << factorial(-2) << '\n';    // -1
    std::cout << factorial(4) << '\n';    // 24
    std::cout << factorial(5) << '\n';    // 120
    std::cout << factorial(8) << '\n';    // 40320
}
