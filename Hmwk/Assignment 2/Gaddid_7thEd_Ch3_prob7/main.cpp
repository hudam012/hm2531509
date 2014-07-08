/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 2
 *
 * Created on July 1, 2014, 12:54 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string month1, month2, month3; 
    float rfone, rftwo, rfthree, avg;
    
    cout<<"Month 1: ";
    cin>> month1; 
    
    cout<<"Inches of rainfall: ";
    cin>>rfone;
    
    cout<<"Month 2: ";
    cin>>month2;
    
    cout<<"Inches of rainfall: ";
    cin>>rftwo;
    
    cout<<"Month 3: ";
    cin>>month3;
    
    cout<<"Inches of rainfall: ";
    cin>>rfthree; 
    
    avg = (rfone + rftwo + rfthree ) / (3);
    
    cout<<"Average rainfall for "<< month1;
    cout<<", " <<month2; 
    cout<< ", and " <<month3; 
    cout<<" was "<<avg;
    cout<<" inches"<<endl; 
    
            
            
    return 0;
}

