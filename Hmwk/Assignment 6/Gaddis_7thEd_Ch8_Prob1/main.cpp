/* 
 * File:   main.cpp
 * Author: Huda Milbes
 *Assignment 6
 * Created on July 31, 2014, 9:26 AM
 */

#include <iostream>

using namespace std;

int countPerfect(int);

int main(int argc, char** argv) {
    

	cout << " ";
	for( char a='A';a<'H';a++)
		cout  << a << " ";
	cout << endl;
	for ( int i = 1; i < 8;i++)
		cout << i << endl;
	int power[10];
	int super, grade, i, perfect = 0;

	cout<<"Enter 10 grades: "<<endl;

	for(super=0; super < 10;super++)
	{
		cout<<"Enter grade for test #"<<super+1<<" :";
		cin>>grade;
		while((grade < 0) || (grade > 100))
		{
			cout << "Enter a positive number: "<<endl;
			cin >> grade;
		}
		power[super] = grade;
	}
	for ( i=0;i<10;i++)
	{
		cout << "Grade " << i+1 << " = " << power[i] << "..." << endl;
		perfect += countPerfect(power[i]);
	}
	cout << "There were " << perfect << " perfect scores!" << endl; 

    return 0;
}

int countPerfect(int grade)
{
	if (grade==100)
		return 1;
	else
		return 0;
}