/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 5
 *
 * Created on July 21, 2014, 8:17 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

void kineticEnergy()
{
    float mass, velocity, energy;
    
    cout<<"What is the object's mass in kilograms? ";
    cin>>mass;
    cout<<"What is the object's velocity in meters per second? ";
    cin>>velocity;
    
    energy = 0.5*mass*pow(velocity,2); 
    cout<<"The object's Kinetic Energy is "<<energy<<" joules."<<endl; 
}


int main(int argc, char** argv) {
 
    kineticEnergy();
 
    return 0;
}

