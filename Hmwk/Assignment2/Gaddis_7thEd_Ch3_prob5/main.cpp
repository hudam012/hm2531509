/* 
 * File:   main.cpp
 * Author: Huda MIlbes
 * Purpose: Assignment 2
 *
 * Created on July 1, 2014, 12:27 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float batting, hits, average;
    
    cout<<"# of times you were at the bat: ";
    cin >> batting;
    cout<<"# of hits you got: ";
    cin >> hits;
    
    average = hits/ batting; 
    
    cout<<"Your batting average is: "<<fixed<<setprecision(4)<<average<<endl; 
    
    
            
            
    
    return 0;
}

