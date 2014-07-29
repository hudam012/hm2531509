/* 
 * File:   main.cpp
 * Author: Huda Milbes
 *
 * Created on July 29, 2014, 1:07 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float fallDist(int time);

int main(int argc, char** argv) {
    
     int time = 1;
    

     for(time=1;time<=10;time++){
        cout<<"Distance object has fallen in "<<time<<" seconds: ";
        cout<<fallDist(time)<<" meters\n";
     }
    return 0;
}

float fallDist(int time)

{ 
    return (0.5)*(9.8)*time*time;
}