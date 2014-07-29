/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 5
 *
 * Created on July 21, 2014, 8:56 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    float NS, SP, SC, PP, PC, profit;
    
    cout<<"Number of shares: ";
    cin>>NS;
    cout<<"Sale Price Per Share: $";
    cin>>SP;
    cout<<"Sale Commission Paid: $"; 
    cin>>SC;
    cout<<"Purchase Price Per Share: $";
    cin>>PP;
    cout<<"Purchase Commission Paid: $";
    cin>>PC;
    
    profit = ((NS*SP)-SC) - ((NS*PP)+PC); 
    
    if (profit>=0)
        cout<<"Profit from sale of stock: $"<<fixed<<setprecision(2)<<profit;
    
    if (profit<0)
        cout<<"Loss from sale of stock: $"<<fixed<<setprecision(2)<<profit;

    return 0;
}

