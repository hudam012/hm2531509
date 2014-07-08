/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 1:21 PM
 */

#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int choice, radius, length, width, base, height, area1, area2, area3;

    cout<<"      Geometry Calculator\n\n";
    cout<<"1. Calculate the Area of a Circle\n";
    cout<<"2. Calcualte the Area of a Rectangle\n";
    cout<<"3. Calcualte the Area of a Triangle\n";
    cout<<"4. Quit\n\n";
    
    cout<<"Enter Choice Here: ";
    cin>>choice;
    
    if (choice == 1) {
        cout<<"Radius of the Circle: ";
        cin>>radius;
    
        area1 = pow(radius,2) * 3.14159;
    
        cout<<"Area of the Circle = "<<area1<<endl;
        
    }
    
    else if (choice == 2) {
        cout<<"Length of the Rectangle: ";
        cin>>length;
        cout<<"Width of Rectangle: ";
        cin>>width;
    
        area2 = length * width;
    
        cout<<"Area of the Rectangle = "<<area2<<endl;
        
    }
    
    else if (choice == 3) {
        cout<<"Base of the Triangle: ";
        cin>>base;
        cout<<"Height of the Triangle: ";
        cin>>height;
        
        area3 = base * height * 0.5;
        
        cout<<"Area of the Triangle = "<<area3<<endl;
    }
    
    else if (choice != 4) {
        cout<<"Valid choices are 1 through 4, Run program again\n ";
    }
            
            
    
        
    
    
   
                
    
    
    
    return 0;
}

