/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 *
 * Created on July 14, 2014, 12:37 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
      {
    int year;
    
  
 
    for (year=2015; year<=2020; year+=1)
        
        cout<<"Year: "<<year<<endl;
    }
    
    float MS = 2500; //Membership
    
    cout<<"Membership for 2015: $"<<MS<<endl;
    cout<<"Membership for 2016: $"<<MS + 100<<endl;
    cout<<"Membership for 2017: $"<<MS + 204<<endl;
    cout<<"Membership for 2018: $"<<MS + 312.16<<endl;
    cout<<"Membership for 2019: $"<<MS + 424.65<<endl;
    cout<<"Membership for 2020: $"<<MS + 541.64<<endl;
    

    return 0;
}

