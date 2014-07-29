/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Created on July 29, 2014, 12:35 PM
 */

#include <iostream>

using namespace std;

int toCelsius(int fahr);

int main(int argc, char** argv) {
    
    cout << "Farenheit\tCelsius\n"; 
    for(int i = 0; i <= 20; i++) 
    { 
    cout << i << "\t\t" << toCelsius(i) << endl;
    }

    return 0;
}


int toCelsius(int fahr) 
{ 
return(int) ((fahr - 32.0) * (5.0/9.0)); // return the value not the function name 
}


