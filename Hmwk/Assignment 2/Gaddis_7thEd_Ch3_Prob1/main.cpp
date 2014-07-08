/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2 
 *
 * Created on June 30, 2014, 8:19 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int gallons, miles, milespergallon;
    
    //Have user input miles and gallons
    cout<<"How many gallons of gas can the car hold ? ";
    cin >> gallons;
    cout<<"How many miles can the car be driven on a full tank ? ";
    cin >> miles;
    
    //Compute and display miles per gallon
    milespergallon = miles / gallons;
    
    cout<<"Number of miles per gallon = " << milespergallon << endl;
    
            
            
    
    

    return 0;
}

