/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 12:27 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int month, day, year, magic;
    
    
    cout<<"Enter two-digit month: ";
    cin>>month;
    
    cout<<"Enter two-digit day: ";
    cin>>day;
    
    cout<<"Enter two digit year ";
    cin>>year;
    
    magic = month * day;
    
    if (magic == year)
        cout<<"The date is magic";
    else
        cout<<"The date is not magic";
    

    return 0;
}

