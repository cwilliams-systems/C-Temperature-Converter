#include <iostream>
using namespace std;

int main(){

    double temp;
    char unit;
  
    cout << "               Temperature Conversion               \n";
    cout << "F = Fahrenheit \n";
    cout << "C = Celsius \n";
    cout << "K = Kelvin \n";
    cout << "Convert from (F)ahrenheit, (C)elsius, (K)elvin: ";
    cin >> unit;
    if (unit != 'F' && unit != 'f' &&
        unit != 'C' && unit != 'c' && 
        unit != 'K' && unit != 'k')
        {
            cout << "Please enter a valid unit \n";
            return 0;
        }
        
        cout << "Enter the temperature: ";
    cin >> temp;
    if (unit == 'F' || unit == 'f'){
        cout << "Celsius:" << (temp - 32)/1.8 << " Degrees Celsius \n";
        cout << " Kelvin: " << (temp - 32) * 5/9 + 273.15 << " Kelvins \n";
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Fahrenheit:" << (temp * 9/5) + 32 << " Degrees Fahrenheit \n";
        cout << " Kelvin:" << (temp + 273.15 ) << " Kelvins \n";
    }
    else if (unit == 'K' || unit =='k'){
        cout << "Fahrenheit:" << (temp - 273.15) * 9/5 + 32 << " Degree's Fahrenheit \n";
        cout << " Celsius:" << (temp - 273.15) << "Degree's Celsius \n";
    }

    cout << "******************************************************";

}