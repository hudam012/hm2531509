/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Assignment 3
 *
 * Created on July 7, 2014, 5:48 PM
 */

#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned short prob;
    
    cout<<"1. Gaddis_7thEd_Ch4_Problem1\n";
    cout<<"2. Gaddis_7thEd_Ch4_Problem3\n";
    cout<<"3. Gaddis_7thEd_Ch4_Problem4\n";
    cout<<"4. Gaddis_7thEd_Ch4_Problem5\n";
    cout<<"5. Gaddis_7thEd_Ch4_Problem6\n";
    cout<<"6. Gaddis_7thEd_Ch4_Problem7\n";
    cout<<"7. Gaddis_7thEd_Ch4_Problem8\n";
    cout<<"8. Gaddis_7thEd_Ch4_Problem10\n";
    cout<<"9. Gaddis_7thEd_Ch4_Problem11\n";
    cout<<"10.Gaddis_7thEd_Ch4_Problem14\n\n";
    
    cout<<"Solve Problem: ";
    cin>>prob;
    switch(prob)
            case 1: {
                float number1, number2, greater_than, less_than;
    
                cout<<"Number 1= ";
                cin>>number1;
                cout<<"Number 2= ";
                cin>>number2;

                greater_than= number1 > number2 ? number1 : number2;
                less_than= number1 < number2 ? number1 : number2;

                cout<<greater_than<<" is greater than "<<less_than<<endl; 
                break;
            
            
            case 2: 
                int month, day, year, magic;
    
    
                cout<<"Enter two-digit month: ";
                cin>>month;

                cout<<"Enter two-digit day: ";
                cin>>day;

                cout<<"Enter two digit year ";
                cin>>year;

                magic = month * day;

                if (magic == year)
                    cout<<"The date is magic";
                else
                    cout<<"The date is not magic";
                break;
                
            case 3: 
                int length1, length2, width1, width2, area1, area2;
    
                //Rectangle 1
                cout<<"The length of rectangle 1 is ";
                cin>>length1;
                cout<<"The width of rectangle 1 is ";
                cin>>width1;

                area1 = length1 * width1;

                cout<<"Area of Rectangle 1: "<<area1<<endl;

                //Rectangle 2
                cout<<"The length of rectangle 2 is ";
                cin>>length2;
                cout<<"The width of rectangle 2 is ";
                cin>>width2;

                area2 = length2 * width2;

                cout<<"Area of Rectangle 2: "<<area2<<endl;

                if (area1 == area2)
                    cout<<"Area of rectangle 1 and 2 are equal ";

                if (area1 > area2)
                    cout<<"Area of rectangle 1 is greater than area of rectangle 2 ";
    
                else
                    cout<<"Area of rectangle 2 is greater than area of rectangle 1 ";
                
                break;
                
                case 4:
                    int books;
    
                    cout<<"Number of books purchased: ";
                    cin>>books;

                    if (books == 0)
                        cout<<"Points Earned = 0 ";

                    if (books == 1)
                        cout<<"Points Earned = 5 ";

                    if (books == 2)
                        cout<<"Points Earned = 15 ";

                    if (books == 3)
                        cout<<"Points Earned = 30 ";

                    if (books >= 4)
                        cout<<"Points Earned = 60 "<<endl; 
                    break;
                    
                case 5:
                    int mass, weight;
    
                    cout<<"Mass of object: ";
                    cin>>mass;

                    weight = mass * 9.8;

                    cout<<"Weight of the object is "<<weight<<endl; 

                    if (weight > 1000)
                        cout<<"Object is too heavy";

                    if (weight < 10)
                        cout<<"Object is too light";
                    break;
                    
                case 6:
                    float secs, days, hours, mins;
    
                    cout<<"Seconds = ";
                    cin>>secs;

                    days = secs / 86400;
                    hours = secs / 3600;
                    mins = secs / 60;


                    if (secs >= 86400) {
                        cout<<"Days = "<<days<<endl;
                    }

                    else if (secs < 86400 && secs >= 3600) {
                        cout<<"Hours = "<<hours<<endl;
                    }

                    else if(secs < 3600 && secs >=60) {
                        cout<<"Minutes = "<<mins<<endl;
                    }

                    else {
                        cout<<"Try Again."<<endl;
                        
                        break;
                        
                case 7: 
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
                        break;
                        
                case 8:
                     int checks, fees1, fees2, fees3, fees4;
    
                    cout<<"How many checks have you written in the past month? ";
                    cin>>checks;

                    if (checks < 0) {
                        cout<<"Invalid number. Please try again."<<endl;

                    }

                    else if (checks < 20) {
                        fees1 = (10 * checks)+ (.1 * checks);

                        cout<<"Your bank fee for this month is $"<<fees1<<endl;
                    }

                    else if (checks >= 20 && checks <= 39) {
                        fees2 = (10 * checks)+ (.08 * checks);

                        cout<<"Your bank fee for this month is $"<<fees2<<endl;
                    }

                    else if (checks >= 40 && checks <= 59) {
                        fees3 = (10 * checks)+ (.06 * checks);

                        cout<<"Your bank fee for this month is $"<<fees3<<endl;
                    }

                    else if (checks >= 60) {
                        fees4 = (10 * checks)+ (.04 * checks);

                        cout<<"Your bank fee for this month is $"<<fees4<<endl;
                        break;
                        
                case 9: 
                    int choice, radius, length, width, base, height, area1, area2, area3;

                    cout<<"      Geometry Calculator\n\n";
                    cout<<"1. Calculate the Area of a Circle\n";
                    cout<<"2. Calcualte the Area of a Rectangle\n";
                    cout<<"3. Calcualte the Area of a Triangle\n";
                    cout<<"4. Quit\n\n";

                    cout<<"Enter Choice Here: ";
                    cin>>choice;

                    if (choice == 1) {
                        cout<<"Radius of the Circle: ";
                        cin>>radius;

                        area1 = pow(radius,2) * 3.14159;

                        cout<<"Area of the Circle = "<<area1<<endl;

                    }

                    else if (choice == 2) {
                        cout<<"Length of the Rectangle: ";
                        cin>>length;
                        cout<<"Width of Rectangle: ";
                        cin>>width;

                        area2 = length * width;

                        cout<<"Area of the Rectangle = "<<area2<<endl;

                    }

                    else if (choice == 3) {
                        cout<<"Base of the Triangle: ";
                        cin>>base;
                        cout<<"Height of the Triangle: ";
                        cin>>height;

                        area3 = base * height * 0.5;

                        cout<<"Area of the Triangle = "<<area3<<endl;
                    }

                    else if (choice != 4) {
                        cout<<"Valid choices are 1 through 4, Run program again\n ";
                    }
                    break;
                    
            case 10:
                int bmi, height1, weight; 
    
                cout<<"Height in inches: ";
                cin>>height1;
                cout<<"Weight in pounds: ";
                cin>>weight;

                bmi = ((703) / (pow(height1,2))) * (weight);

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
                break;

                            
    }
    
                    
 
            }
                    }
            }
            
         

    return 0;
                    }

