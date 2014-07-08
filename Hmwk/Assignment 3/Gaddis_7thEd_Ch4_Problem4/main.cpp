/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 12:38 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int length1, length2, width1, width2, area1, area2;
    
    //Rectangle 1
    cout<<"The length of rectangle 1 is ";
    cin>>length1;
    cout<<"The width of rectangle 1 is ";
    cin>>width1;
    
    area1 = length1 * width1;
    
    cout<<"Area of Rectangle 1: "<<area1<<endl;
    
    //Rectangle 2
    cout<<"The length of rectangle 2 is ";
    cin>>length2;
    cout<<"The width of rectangle 2 is ";
    cin>>width2;
    
    area2 = length2 * width2;
    
    cout<<"Area of Rectangle 2: "<<area2<<endl;
    
    if (area1 == area2)
        cout<<"Area of rectangle 1 and 2 are equal ";
    
    if (area1 > area2)
        cout<<"Area of rectangle 1 is greater than area of rectangle 2 ";
    
    else
        cout<<"Area of rectangle 2 is greater than area of rectangle 1 ";
    
    
            
            
           
            

    return 0;
}

