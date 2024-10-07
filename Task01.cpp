#include <iostream>
#include <cmath> 

int main() {
    // perimetur i lice?
    double a = 10;
    double b = 7;
    double c = 6.5;

    double perimetur = a + b + c;
    double poliperimetur = perimetur / 2;
    double lice = sqrt(poliperimetur * (poliperimetur - a) * (poliperimetur - b) * (poliperimetur - c));

    std::cout << "Perimetur " << perimetur << std::endl;
    std::cout << "Lice: " << lice << std::endl;

    return 0;
}
