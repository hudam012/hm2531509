/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3 
 *
 * Created on July 7, 2014, 12:16 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float number1, number2, greater_than, less_than; 
    
    cout<<"Number 1= ";
    cin>>number1;
    cout<<"Number 2= ";
    cin>>number2;
    
    greater_than= number1 > number2 ? number1 : number2;
    less_than= number1 < number2 ? number1 : number2;
    
    cout<<greater_than<<" is greater than "<<less_than<<endl; 
    
    
    
    

    return 0;
}

