/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 * Created on July 14, 2014, 2:26 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    { 
int rownum; //Number of Rows

cout << "This program will make a diamond.\n"; 

for (rownum = 0; rownum < 7; rownum++) 
{ 
for(int i = 0; i < rownum; i++) 
cout << "+"; 

cout<<endl; 
} 

for (rownum = 7; rownum >= 1; rownum--) 
{ 
for(int i = 0; i < rownum; i++) 
cout << "+"; 

cout<<endl; 
} 

    return 0;
}
}


