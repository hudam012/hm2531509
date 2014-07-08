/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 2:53 PM
 */

#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int bmi, height, weight; 
    
    cout<<"Height in inches: ";
    cin>>height;
    cout<<"Weight in pounds: ";
    cin>>weight;
    
    bmi = ((703) / (pow(height,2))) * (weight);
    
    cout<<"BMI= "<<bmi<<endl;
    
    if (bmi < 18.5) {
        cout<<"You are underweight. "<<endl;
    }
    
    else if (bmi > 25) {
        cout<<"You are overweight. "<<endl;
    }
    
    else if (bmi >=18.5 && bmi<=25) {
        cout<<"Your weight is optimal. "<<endl;
    }

           
    
    

    return 0;
}

