/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 1
 *
 * Created on July 7, 2014, 2:26 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int number1, number2, answer1, answer2;
    
    cout<<"Pick a number from 10 to 50: ";
    cin>>number1;
    
    cout<<"Pick another number from 10 to 50: ";
    cin>>number2;
   
    if (number1<10|| number1>50|| number2<10|| number2>50) {
        cout<<"Invalide Number. Run Again"<<endl;
    }
    
    answer1= number1 + number2;
    
    cout<<"Input Answer Here: ";
    cin>>answer2;
    
        if (answer2!= answer1) {
        cout<<"I'm sorry that answer is incorrect. Please try again."<<endl;
         }

    
    
    
        else if (answer2== answer1) {
        cout<<"Nice Job! Your answer is correct."<<endl;
    }
    
  
        
        
     
 

    return 0;
}

