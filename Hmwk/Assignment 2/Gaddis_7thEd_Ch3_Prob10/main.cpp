/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on July 1, 2014, 2:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float cookies, calories; 
    
    cout<<"How many cookies did you eat? ";
    cin>>cookies;
    
    calories = (10 * 300) / (40) * cookies; 
    
    cout<<"Calories consumed: "<<calories<<endl; 
    
            
            

    return 0;
}

