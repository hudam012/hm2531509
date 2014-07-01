/* 
 * File:   main.cpp
 * Author: Huda Milbes 
 * Assignemt 1
 *
 * Created on June 30, 2014, 1:55 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float producecost; //Cost it takes to produce circuit board
    float sellcost; //Cost circuit board is sold
    
    producecost = 12.67;
    sellcost = (producecost * .4)+ producecost;
    
    cout<< "Selling Price = $ " << sellcost <<endl;
            
            
            

    return 0;
}

