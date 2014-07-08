/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 1:51 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float secs, days, hours, mins;
    
    cout<<"Seconds = ";
    cin>>secs;
    
    days = secs / 86400;
    hours = secs / 3600;
    mins = secs / 60;
    
 
    if (secs >= 86400) {
        cout<<"Days = "<<days<<endl;
    }
    
    else if (secs < 86400 && secs >= 3600) {
        cout<<"Hours = "<<hours<<endl;
    }
    
    else if(secs < 3600 && secs >=60) {
        cout<<"Minutes = "<<mins<<endl;
    }
    
    else {
        cout<<"Try Again."<<endl;
    }
      

    return 0;
}

