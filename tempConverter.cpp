#include <iostream>
#include <string>

// Getting the unit of temperature
std::string getUnit()
{
    std::cout << "Write which temperature measurement unit you want to use (Celsius, Fahrenheit, or Kelvin): ";
    std::string unit{};
    getline(std::cin >> std::ws, unit);
    
    return unit;
}

// Getting the temperature value
double getTemp()
{
    std::cout << "Write the temperature: ";
    double temp {};
    std::cin >> temp;
    
    return temp;
}

int main()
{
    std::string unit { getUnit() };
    double temp { getTemp() };
    
    if (unit == "Celsius" || unit == "celsius")
    {
        double fahrenheit { (9.0 / 5.0) * temp + 32 };
        double kelvin { temp + 273.15 };
        
        std::cout << temp << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit, "
                  << kelvin << " degrees Kelvin\n.";
    }
    
    else if (unit == "Fahrenheit" || unit == "fahrenheit")
    {
        double celsius { (temp - 32) * 5.0 / 9.0 };
        double kelvin { (temp - 32) * 5.0 / 9.0 + 273.15 };
        
        std::cout << temp << " degrees Fahrenheit = " << celsius << " degrees Celsius, "
                  << kelvin << " degrees Kelvin.\n";
    }
    
    else if (unit == "Kelvin" || unit == "kelvin")
    {
        double celsius { temp - 273.15 };
        double fahrenheit { 1.8 * (temp - 273.15) + 32 };
        
        std::cout << temp << " degrees Kelvin = " << celsius << " degrees Celsius, "
                  << fahrenheit << " degrees Fahrenheit.\n";
    }
    
    else
    {
        std::cout << "Please, enter Celsius, Fahrenheit, or Kelvin!\n";
    }
    
    return 0;
}
