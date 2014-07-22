/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 5
 *
 * Created on July 21, 2014, 7:38 PM
 */

#include <iostream>
# include <iomanip>

using namespace std;

void calculateRetail()
{
float wholesale, percent, retailprice;
    
     if (wholesale>=0) 
        
         cout<<"Whole Sale Price: $";
         cin>>wholesale;
     
     if (wholesale<0)
         
         cout<<"Invalid Number."<<endl;
      
    if (percent>=0)
        
        cout<<"Markup Percentage: %";
        cin>>percent;
        
    if(percent<0)
        
        cout<<"Invalid Number."<<endl;
    
    retailprice = (percent/100)*wholesale + (wholesale);
    
    if (retailprice>=0)
    
        cout<<"Retail Price = $"<<fixed<<setprecision(2)<<retailprice<<endl; 
    
    if (retailprice<0)
        
        cout<<"ERROR. TRY AGAIN."<<endl;
}

int main(int argc, char** argv) {
    
    calculateRetail(); 
   
    return 0;
}

