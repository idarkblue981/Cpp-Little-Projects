#include <iostream>
#include <cmath>

float getInput(const std::string& str)
{
    std::cout << "Enter " << str << ": ";
    float input{};
    std::cin >> input;
    return input;
}

void supportedFigures()
{
    std::cout << "Supported figures: cube, cuboid, cone, "
              << "cylinder, sphere, hemisphere, prism, and pyramid.\n";
}

std::string getFigure()
{
    std::cout << "Enter figure: ";
    std::string figure{};
    std::cin >> figure;
    return figure;
}

int main()
{
    const float pi{3.14159};

    supportedFigures();
    std::string figure{getFigure()};

    if (figure == "cube")
    {
        float side{getInput("side of the cube")};
        std::cout << "Volume = " << side * side * side << '\n';
    }
    else if (figure == "cuboid")
    {
        float length{getInput("length")};
        float breadth{getInput("breadth")};
        float height{getInput("height")};
        std::cout << "Volume = " << length * breadth * height << '\n';
    }
    else if (figure == "cone")
    {
        float radius{getInput("radius of the base")};
        float height{getInput("height")};
        std::cout << "Volume = " << (1.0 / 3) * (pi * (radius * radius) * height) << '\n';
    }
    else if (figure == "cylinder")
    {
        float radius{getInput("radius of the base")};
        float height{getInput("height")};
        std::cout << "Volume = " << pi * (radius * radius) * height << '\n';
    }
    else if (figure == "sphere")
    {
        float radius{getInput("radius")};
        std::cout << "Volume = " << (4.0 / 3) * (pi * (radius * radius * radius)) << '\n';
    }
    else if (figure == "hemisphere")
    {
        float radius{getInput("radius")};
        std::cout << "Volume = " << (2.0 / 3) * (pi * (radius * radius * radius)) << '\n';
    }
    else if (figure == "prism")
    {
        float side{getInput("base side length (assuming equilateral triangle)")};
        float height{getInput("height")};
        std::cout << "Volume = " << ((side * side * std::sqrt(3)) / 4) * height << '\n';
    }
    else if (figure == "pyramid")
    {
        float side{getInput("base side length")};
        float height{getInput("height")};
        std::cout << "Volume = " << (1.0 / 3) * (side * side * height) << '\n';
    }
    else
    {
        std::cout << "Invalid figure. Please try again.\n";
        supportedFigures();
    }

    return 0;
}
