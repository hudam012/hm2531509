/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 1
 *
 * Created on June 30, 2014, 1:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float gallons;
    float miles;
    float mipergal; // Miles/Gallon
    
    
    gallons = 16;
    miles = 350;
    mipergal = miles / gallons;
    
    cout << "Miles = " << miles <<endl;
    cout << "Gallons = " << gallons <<endl;
    cout <<"Miles per Gallon = "<< mipergal <<endl;
       

    return 0;
}

