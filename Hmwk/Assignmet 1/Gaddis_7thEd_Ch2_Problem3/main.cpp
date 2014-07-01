/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 1
 *
 * Created on June 30, 2014, 12:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float purchase; 
    float statetax;
    float cntytx;
    float total; 
    
    purchase = 52; 
    statetax = purchase * .04;
    cntytx = purchase * .02;
    
    cout << "Purchase = $ "<< purchase <<endl;
    cout << "State Tax = "<< statetax <<endl;
    cout << "County Tax = "<< cntytx <<endl;
    cout << "total = "<< purchase + statetax + cntytx <<endl;
            
            
            

    return 0;
}

