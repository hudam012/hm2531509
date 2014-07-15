/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 *
 * Created on July 14, 2014, 12:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
      {
    int kph; 
    
    cout<<"KPH:          MPH:\n";
    cout<<"--------------------"<<endl;
    
    for (kph=60; kph<=130; kph+=5)
        
        cout<<""<<kph<<"           "<<kph * 0.6214<<endl;
    }

    return 0;
}

