/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 2
 *
 * Created on July 7, 2014, 12:49 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int mass, weight;
    
    cout<<"Mass of object: ";
    cin>>mass;
    
    weight = mass * 9.8;
    
    cout<<"Weight of the object is "<<weight<<endl; 
    
    if (weight > 1000)
        cout<<"Object is too heavy";
    
    if (weight < 10)
        cout<<"Object is too light";
 
    
            
            

    return 0;
}

