/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 1
 *
 * Created on June 30, 2014, 2:09 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float x; // square feet in one square meter
    float y; // square feet in one acre of land 
    float sf; // square feet in 1/4 acre of land 
    float sm; // square meter in 1/4 acre of land
    
    x = 43560;
    y = 10.7639;
    sf = 0.25 * x;
    sm = 0.25 * (x/y);
   
      cout<< "There is "<< sf << " square feet in 1/4 acre of land ";
      cout<< "\nThere is "<< sm << " sqyare meters in 1/4 acre of land ";
            
            
            

    return 0;
}

