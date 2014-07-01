/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on June 30, 2014, 8:38 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int mortgage, utilities, phones, cables, totalmonthly, totalannualy;
    
    cout<<" Monthly Cost of Mortgage : $";
    cin >> mortgage;
    cout<<" Monthly Cost of Utilities : $";
    cin >> utilities;
    cout<<" Monthly Cost of Phones : $";
    cin >> phones;
    cout<<" Monthly Cost of Cables: $";
    cin >> cables;
    
    totalmonthly = mortgage + utilities + phones + cables;
    totalannualy = 12 * totalmonthly;
    
    cout<<" The total monthly cost is " << totalmonthly <<endl;
    cout<<" The total annual cost is " << totalannualy <<endl;
            
            
    
    
    
            
            

    return 0;
}

