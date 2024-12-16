#include<iostream>

// Find the biggest side
int max(int x, int y)
{
    return (x > y) ? x : y;
}

int max(int x, int y, int z)
{
    return max(max(x, y), z);
}

// Find the middle side
int med(int x, int y, int z)
{
    if((x < y && y < z) || (z < y && y < x))
        return y;
    else if((y < x && x < z) || (z < x && x < y))
        return x;
    else
        return z;
}

// Find the smallest side
int small(int x, int y)
{
    return (x < y) ? x : y;
}

int small(int x, int y, int z)
{
    return small(small(x, y), z);
}

// Basic check
bool isValidTriangle(int x, int y, int z)
{
    return (x + y > z && x + z > y && y + z > x);
}

int main()
{
    std::cout << "Enter first side value: ";
    int side1{};
    std::cin >> side1;

    std::cout << "Enter second side value: ";
    int side2{};
    std::cin >> side2;

    std::cout << "Enter third side value: ";
    int side3{};
    std::cin >> side3;

    if (!isValidTriangle(side1, side2, side3))
    {
        std::cout << "The sides do not form a valid triangle.\n";
        return 1; // Exit if it's not ok
    }

    std::cout << "The triangle with side values " << side1 << ", ";
    std::cout << side2 << " and " << side3 << " is ";

    int biggest{max(side1, side2, side3)};
    int medium{med(side1, side2, side3)};
    int smallest{small(side1, side2, side3)};

    if( (biggest * biggest) != (medium * medium) + (smallest * smallest) )
        std::cout << "not ";

    std::cout << "a right triangle.\n";

    return 0;
}
