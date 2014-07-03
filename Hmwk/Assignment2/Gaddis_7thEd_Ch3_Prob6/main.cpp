/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Purpose: Assignment 2
 *
 * Created on July 1, 2014, 12:41 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float testone, testtwo, testthree, testfour, testfive, avg;
    
    cout<<"Test 1 Score: ";
    cin >> testone;
    cout<<"Test 2 Score: ";
    cin >> testtwo;
    cout<<"Test 3 Score: ";
    cin >> testthree;
    cout<<"Test 4 Score: ";
    cin >> testfour;
    cout<<"Test 5 Score: ";
    cin >>testfive;
    
    avg = (testone + testtwo + testthree + testfour + testfive) / (5);
    
    cout<<"My average test score is: "<<fixed<<setprecision(1)<<avg<<endl;
    
            
            
 
            
           
    return 0;
}

