/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on July 1, 2014, 11:57 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float classA, classB, classC, Total;
    
    cout<<"How many Class A tickets were sold? ";
    cin >> classA;
    cout<<"How many Class B tickets were sold? ";
    cin >> classB;
    cout<<"How many Class C tickets were sold? ";
    cin>> classC;
    
    Total = 15 * classA + 12 * classB + 9 * classC;
    
    
    cout<<"Total Income Generated= $"<<fixed<<setprecision(2)<< Total <<endl;
    
    
    
    
            

    return 0;
}

