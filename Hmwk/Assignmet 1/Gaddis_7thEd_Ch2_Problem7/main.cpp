/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 1
 *
 * Created on June 30, 2014, 1:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float twn; // Average Miles per Gallon in Town
    float highwy; // Average Miles per Gallon on Highway
    float mitown; // Average Miles Traveled in Town
    float mihighway; // Average Miles Traveled on Highway 
    float gallons; // Gallons Car Holds
    
    gallons = 20;
    twn = 21.5;
    highwy = 26.8;
    mitown = gallons * twn;
    mihighway = gallons * highwy; 
    
    cout<< "Distance traveled in town = " << mitown << " miles";
    cout<< "\nDistance traveled on highway = " << mihighway << " miles";
           
           
    
    return 0;
}

