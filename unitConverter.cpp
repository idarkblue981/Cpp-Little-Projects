#include <iostream>
#include <string>

void helpPanel()
{
    std::cout << "What conversion do you want for today?\n";
    std::cout << "For meter-kilometer, type 'mk'.\n";
    std::cout << "For kilometer-meter, type 'km'.\n";
    std::cout << "For gram-kilogram, type 'gk'.\n";
    std::cout << "For kilogram-gram, type 'kg'.\n";
}

int unitConverter()
{
    std::cout << "Type here: ";
    std::string choice{};
    std::cin >> choice;

    // Validate input
    if (choice != "mk" && choice != "km" && choice != "gk" && choice != "kg")
    {
        std::cout << "Non-valid choice!\n";
        return 1;
    }

    float x{};

    // Handle each conversion type
    if (choice == "mk")
    {
        std::cout << "Enter the number of meters: ";
        std::cin >> x;
        std::cout << x << " meters = " << x / 1000 << " kilometers.\n";
    }
    else if (choice == "km")
    {
        std::cout << "Enter the number of kilometers: ";
        std::cin >> x;
        std::cout << x << " kilometers = " << x * 1000 << " meters.\n";
    }
    else if (choice == "gk")
    {
        std::cout << "Enter the number of grams: ";
        std::cin >> x;
        std::cout << x << " grams = " << x / 1000 << " kilograms.\n";
    }
    else if (choice == "kg")
    {
        std::cout << "Enter the number of kilograms: ";
        std::cin >> x;
        std::cout << x << " kilograms = " << x * 1000 << " grams.\n";
    }

    return 0;
}

int main()
{
    std::string again = "y";

    while (again == "y")
    {
        helpPanel();
        unitConverter();

        std::cout << "\nDo you want another conversion? (y/n): ";
        std::cin >> again;

        if (again != "y" && again != "n")
        {
            std::cout << "Invalid input. Exiting program.\n";
            break;
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}
