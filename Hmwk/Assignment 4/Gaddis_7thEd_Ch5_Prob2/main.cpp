/* 
 * File:   main.cpp
 * Author: Huda Milbes
 *
 * Created on July 10, 2014, 11:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int num;
    int sum = 0;
    
    do {
        cout<<"Positive Integer: ";
        cin>>num;
        
        
    }while (num <=0);
    
    while (num>0) {
        sum+=num;
        num--;
        cout<<"Sum = "<<sum<<endl;
                
        
    }
        

    return 0;
}

