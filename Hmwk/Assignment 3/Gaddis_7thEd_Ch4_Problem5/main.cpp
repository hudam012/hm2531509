/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 1:00 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int books;
    
    cout<<"Number of books purchased: ";
    cin>>books;
    
    if (books == 0)
        cout<<"Points Earned = 0 ";
    
    if (books == 1)
        cout<<"Points Earned = 5 ";
    
    if (books == 2)
        cout<<"Points Earned = 15 ";
    
    if (books == 3)
        cout<<"Points Earned = 30 ";
    
    if (books >= 4)
        cout<<"Points Earned = 60 "<<endl; 
            
            
    
    
    
    

    return 0;
}

