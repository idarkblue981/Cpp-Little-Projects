#include <iostream>

float getInput(const std::string str)
{
    std::cout << "Enter " << str << ": ";
    float input{};
    std::cin >> input;
    return input;
}

void supportedFigures()
{
    std::cout << "Supported figures: square, triangle, rectangle, "
              << "parallelogram, rhombus, trapezium and circle.\n";
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
    supportedFigures();
    std::string figure{getFigure()};

    if(figure == "square")
    {
        float side{getInput("side")};
        std::cout << "Area = " << side * side << '\n';
    }

    else if (figure == "triangle")
    {
        float base{getInput("base")};
        float height{getInput("height")};
        std::cout << "Area = " << 1.0 / 2 * (base * height) << '\n';
    }

    else if (figure == "rectangle" || figure == "parallelogram")
    {
        float base{getInput("base")};
        float height{getInput("height")};
        std::cout << "Area = " << base * height << '\n';
    }

    else if (figure == "rhombus")
    {
        float diagonal1{getInput("first diagonal")};
        float diagonal2{getInput("second diagonal")};
        std::cout << "Area = " << 1.0 / 2 * (diagonal1 * diagonal2) << '\n';
    }

    else if (figure == "trapezium")
    {
        float bigBase{getInput("big base")};
        float smallBase{getInput("small base")};
        float height{getInput("height")};
        std::cout << "Area = " << 1.0 / 2 * (bigBase + smallBase) * height << '\n';
    }

    else if (figure == "circle")
    {
        float radius{getInput("radius")};
        const float pi{3.14159};
        std::cout << "Area = " << pi * (radius * radius) << '\n';
    }

    else
    {
        std::cout << "Invalid figure. Please try again.\n";
        supportedFigures();
    }

    return 0;
}
