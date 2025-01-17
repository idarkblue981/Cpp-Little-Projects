#include <iostream>

int findSum(int x)
{
    if (x == 0) return 0;
    else if (x == 1) return 1;
    else if (x < 0) return -1;
    else return x * (x + 1) / 2;
}

int main()
{
    std::cout << findSum(0) << '\n';    // 0
    std::cout << findSum(1) << '\n';    // 1
    std::cout << findSum(-4) << '\n';   // -1
    std::cout << findSum(10) << '\n';   // 55
    std::cout << findSum(100) << '\n';  // 5050
}
