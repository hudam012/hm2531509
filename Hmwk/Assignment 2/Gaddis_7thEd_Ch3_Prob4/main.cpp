/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on June 30, 2014, 9:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int replacement, ins; 
    
    cout<<"What is the replacement cost of the biulding? $";
    cin >> replacement;
    
    ins = 0.8 * replacement; 
    
    cout <<"Minumum amount of insurance that should be purchased for the property is $" << ins << endl; 
            
            

    return 0;
}

