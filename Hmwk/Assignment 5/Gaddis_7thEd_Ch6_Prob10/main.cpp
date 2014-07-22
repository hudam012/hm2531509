/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 5
 *
 * Created on July 21, 2014, 8:43 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float futureVal = 10000;
    float interestRate, years, presentVal; 
    
    cout<<"Annual interest rate: ";
    cin>>interestRate;
    cout<<"Years money will sit in account: ";
    cin>>years; 
    
    presentVal = (futureVal) / (pow(1+interestRate,years));
    
    cout<<"You should deposit $"<<fixed<<setprecision(2)<<presentVal<<" today"<<endl; 

    return 0;
}

