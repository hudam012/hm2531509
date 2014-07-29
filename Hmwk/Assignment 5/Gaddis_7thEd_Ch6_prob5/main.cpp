/* 
 * File:   main.cpp
 * Author: Huda Milbes
 *
 * Created on July 29, 2014, 1:34 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

float getSales(float, float, float, float);
void findHighest(float, float, float, float);

int main(int argc, char** argv) {
   
        float neast,seast, nwest, swest; 
                       
        cout << "Northeast divisions sales: \n"; 
        cin >> neast;
        while (neast <=0){ 
                 cout << "Northeast divisions sales: \n";
                                cin >> neast;
                            }
                 cout << "Southeast divisions sales: \n"; 
                            cin >> seast;
                            while (seast <=0){
                 cout << "Southeast divisions sales: \n";
                                cin >> seast;
                            }
                 cout << "Northwest divisions sales: \n"; 
                 cin >> nwest;
                            while (nwest <=0){// less than or equal to 0.
                 cout << "Northwest divisions sales: \n";
                 cin >> nwest;
                            }
                 cout << "Southwest division sales: \n"; 
                            cin >> swest;
                            while (swest <=0){
                 cout << "Southwest division sales: \n";
                                cin >> swest;
                            }
     findHighest(neast, seast, nwest, swest); 
                cout << "$"; 
                cout << getSales(neast,seast, nwest, swest);// function
                cout << " in sales.\n";

    return 0;
}

void findHighest(float a, float b, float c, float d)
    {
    if ( a>b && a>c && a>d)
    cout << "The Northeast division had the greatest sales for the quarter.\n";
    if ( b>a && b>c && b>d)
     cout << "The Southeast division had the greatest sales for the quarter.\n";
    if ( c>a && c>b && c>d)
     cout << "The Northwest division had the greatest sales for the quarter.\n";
    if ( d>a && d>b && d>c)
     cout << "The Southwest division had the greatest sales for the quarter.\n";
    
    }