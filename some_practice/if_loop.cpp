#include <iostream>
#include <cmath>
#include <string>
int main(){
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a>0&&b>0&&c>0) {
        std::cout << "all variables entered: " << "(a : " << a << ") " << "(b : " << b << ") " << "(c:" << c << ") " << " are positive";
    } else {
        std::cout << "at least one variable: " << "(a : " << a << ") " << "(b : " << b << ") " << "(c:" << c << ") " << " is negative";     
    }
}
