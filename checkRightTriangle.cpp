#include<iostream>

int main()
{
    std::cout << "Enter biggest side value: ";
    int side1{};
    std::cin >> side1;

    std::cout << "Enter second side value: ";
    int side2{};
    std::cin >> side2;

    std::cout << "Enter third side value: ";
    int side3{};
    std::cin >> side3;

    std::cout << "The triangle with side values " << side1 << " , ";
    std::cout << side2 << " and " << side3 << " is ";

    if( (side1 * side1) != (side2 * side2) + (side3 * side3) )
        std::cout << "not";

    std::cout << " a right triangle.\n";

    return 0;
}
