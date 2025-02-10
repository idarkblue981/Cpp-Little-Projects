#include <iostream>
#include <cmath>

double heronFormula(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a <= 0 || b <= 0 || c <= 0) return 0;
        else
        {
            double s = (a + b + c) / 2;
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }
    }
    return 0;
}

int main()
{
    std::cout << heronFormula(1.5, 2, 3) << '\n';                  // 1.33317
    std::cout << heronFormula(4.75, 5.25, 6.50) << '\n';           // 12.3123
    std::cout << heronFormula(13.125, 15.7255, 20.12345) << '\n';  // 103.134

    return 0;
}
