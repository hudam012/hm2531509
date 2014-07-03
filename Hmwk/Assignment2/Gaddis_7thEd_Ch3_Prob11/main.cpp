/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on July 1, 2014, 1:47 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float Celcius, Faren;
    
    cout<<"Degrees in Celcius: ";
    cin>>Celcius;
    
    Faren = (1.8 * Celcius) + 32;
    
    cout<<Celcius<<" degrees Celcius = "<<Faren<<" degrees Farenheit"<<endl;
    
            

    return 0;
}

