/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 4
 *
 * Created on July 14, 2014, 1:04 PM
 */

#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int time; 
    float speed, distance;
    
    do     {
      
        cout<<"Speed in MPH: ";
        cin>>speed;
        cout<<"Time traveled in hours: ";
        cin>>time;
        cout<<"Hours:        Distance Traveled:"<<endl;
        cout<<"--------------------------------"<<endl;
    }
    
    while(speed<0||time<0);
    
    distance = time * speed;
    

    for(int t=1; t<=time; t++){
        cout<<"  "<<t<<"                  "<<t * speed<<endl;
    }

    return 0;
}

