/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Created on July 1, 2014, 1:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float pallet, widget, widgetnum; 
    
    cout<<"How much does the pallet weigh by itself in pounds? ";
    cin>>pallet;
    cout<<"How much does the pallet weigh with widgets on top in pounds? ";
    cin>>widget; 
    
    widgetnum = (widget - pallet) / 9.2;
    
    cout<<"Number Of Widgets: "<<widgetnum<<endl; 
            
            
   

    return 0;
}

