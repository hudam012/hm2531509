/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 *
 * Created on July 14, 2014, 12:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    {
    int celsius; 
    
    cout<<"Celsius:          Farenheit:\n";
    cout<<"----------------------------"<<endl;
    
    for (celsius=0; celsius<=20; celsius+=1)
        
        cout<<"   "<<celsius<<"                "<<(celsius * 1.8) + 32<<endl;
    }
    return 0;
}

