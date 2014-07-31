/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 6
 * Created on July 31, 2014, 9:35 AM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
  
	const int romann = 21;  
	
	string roman[romann] = {"","I","II","III","IV","V","VI","VII","VIII","IX","X", 
    "XI","XII","XIII","XIV","XV","XVI","XVII","XIII","XIX","XX"};
	const int i = 0;	 
	int num = 0;																	
																		 
	cout << "Please enter a number between 1 and 20: \n";
	cin >> num;
	cout << endl;
        
	while(num != i)
	{
		cout << "Please enter a number between 1 and 20 (Enter 0 to stop) ";
		cin >> num;
		cout << endl;
		
		if(num > 0 && num <= 20)
		{
			// Displays user input
			cout << num << " is equivalent to " << roman[num] << endl;   
		}

		else
		{
		
			cout << "Invalid entry\n";
			cout << "Please enter a number between 1 and 20 (Enter 0 to stop) ";
			cin >> num;
			cout << endl;
		}
	
	}


    return 0;
}

