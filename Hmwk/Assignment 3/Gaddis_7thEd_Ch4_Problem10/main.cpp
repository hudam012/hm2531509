/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 * Created on July 7, 2014, 3:09 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int checks, fees1, fees2, fees3, fees4;
    
    cout<<"How many checks have you written in the past month? ";
    cin>>checks;
    
    if (checks < 0) {
        cout<<"Invalid number. Please try again."<<endl;
        
    }
    
    else if (checks < 20) {
        fees1 = (10 * checks)+ (.1 * checks);
        
        cout<<"Your bank fee for this month is $"<<fees1<<endl;
    }
    
    else if (checks >= 20 && checks <= 39) {
        fees2 = (10 * checks)+ (.08 * checks);
        
        cout<<"Your bank fee for this month is $"<<fees2<<endl;
    }
    
    else if (checks >= 40 && checks <= 59) {
        fees3 = (10 * checks)+ (.06 * checks);
        
        cout<<"Your bank fee for this month is $"<<fees3<<endl;
    }
    
    else if (checks >= 60) {
        fees4 = (10 * checks)+ (.04 * checks);
        
        cout<<"Your bank fee for this month is $"<<fees4<<endl;
    }
    
  

    return 0;
}

