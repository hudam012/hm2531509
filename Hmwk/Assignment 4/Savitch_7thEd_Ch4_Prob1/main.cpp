/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 *
 * Created on July 14, 2014, 3:07 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    for (;;) {
        
       float liters, miles, gallons, mpg; 
       
       cout<<"How many liters of gasoline was consumed? ";
       cin>>liters;
       cout<<"How many miles were traveled? ";
       cin>>miles;
       
       gallons = liters * 0.264179;
       cout<<"Gallons consumed: "<<gallons<<endl;
       
       mpg = miles / gallons;
       cout<<"Miles Per Gallons: "<<mpg<<endl;
       
       
       
       
        
    }

    return 0;
}

