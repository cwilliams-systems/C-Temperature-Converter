#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    std::cout << "What is Side A?: ";
    std:: cin >> a;

    std::cout << "What is side B?: ";
    std::cin >> b;

   double hypothenuse = sqrt(pow(a,2)+ pow(b,2));

   std::cout << "The Side C is: " << hypothenuse;
    
    return 0;
}