/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Project 2
 *
 * Created on July 29, 2014, 9:52 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

using namespace std;

void drawPicture();

void monsterRoom (int & bananas, int & oranges, string monster);

void genieRoom (int & bananas, int & oranges);

void pictureRoom ();



int main(int argc, char** argv) {
    
    
    cout << "Hello! Do you want to play a game? "<<endl;
    cout << "Yes? Alright then ... \n"<<endl;
    cout << "Please state the following information, \n"<<endl;
   
   
   string monstername = " ";
   
   int bananas = 5;
   
   int oranges = 3;
   
   int orientation = 0;
   
   string doornumber = " ";
   
   int score = 0;
   
   string fname = " "; //First Name
   
   string lname = " "; //Last Name
   
   float age; //Age
   
   string monster = " ";
   
   
   cout << "Please enter your first name: ";
   cin >> fname;
   cout << endl;
   
   cout << "Please enter you last name: ";
   cin >> lname;
   cout << endl;
   
   cout << "Please state how old you are: ";
   cin >> age;
   cout << endl;
   
   
   if (age >12)
  
   {      

   cout << "Name the monster you are most afraid of: ";
   cin >> monster;
   cout << endl;
   
   //We use for random orientation
   srand (500);
   srand (time(0)); 

   while (doornumber != "exit")
   {
       
       cout << fname << " " << lname << ", you are in a room with 4 doors." << endl;
       cout << "You are carrying " << bananas << " bananas and " << oranges 
       << " oranges." << endl;
       cout << endl;
       
    
       cout << "Pick a door to enter by typing the direction it is " 
       << "in (N/E/S/W): ";
       cin >> doornumber;
       cout << endl;
       
    
    
       while( (doornumber != "W") && (doornumber != "E") && (doornumber != "N") 
           && (doornumber != "S") )
       {
           
           
           cout << "Pick a door to enter by typing the direction it is in "
           << "(N/E/S/W): ";
           cin >> doornumber;
           cout << endl;
           
           
       }
   }
       
   
 
       //Also used for random orientation
       //Sets a random orientation
       orientation = rand() % 2;
    
       //First possible orientation
       if(orientation == 0)
       {
        
           if(doornumber == "N")
           {
               monsterRoom (bananas, oranges, monster);
           }
           else if(doornumber == "S")
           {
               genieRoom (bananas, oranges);
           }
           else if(doornumber == "E")
           {
               pictureRoom ();
           }
           else if (doornumber == "W")
           {
               doornumber = "exit";
           }
       }
       
       
       //Second possible orientation
       else if(orientation == 1)
       {
           if(doornumber == "N")
           {
               doornumber = "exit";
           }
           else if(doornumber == "S")
           {
               monsterRoom (bananas, oranges, monster);
           }
           else if(doornumber == "E")
           {
               genieRoom (bananas, oranges);
           }
           else if (doornumber == "W")
           
               pictureRoom ();
           
       }
    
    
   
   
   //Ends the game
   cout<<"You found the exit!"<<endl;
   score = bananas + oranges;
   
   //Output Score
   cout << "Your score is " << score << " (" << bananas << " bananas and " 
   << oranges << " oranges)." << endl;  
   cout << "Goodbye now!!!" << endl;
   }
   
   else if (age <=12) 
   {
       
       cout << "I'm sorry! You are way too young. Come back in a year or two.";
       cout << endl; 
       
   }

    return 0;
}

//You lose all your bananas and oranges in this room
//Score is equal to 0
void monsterRoom (int & bananas, int & oranges, string monster)
{
   bananas = 0;
   oranges = 0;
   
   cout << "WATCH OUT!!" << endl;
   cout << monster << " attacks you and steals all of your bananas and " 
   << "oranges." << endl;
   cout << endl;
}

//You are granted more bananas and oranges in this room
//3 points gets added to score
void genieRoom (int & bananas, int & oranges)
{
   bananas = bananas + 2;
   oranges = oranges + 1;
   
   cout << "!!POOF!!" << endl;
   cout << "A genie pops out and grants you 2 bananas and 1 orange.";
   cout << endl;
}

//Picture room
void pictureRoom ()
{
   cout << "You found a picture!" << endl;
   drawPicture();
}

//Draws picture of a house
void drawPicture()
{
   cout << "        _--~~--_" << endl;
   cout << "      /~/_|  |_\\~\\" << endl;
   cout << "     |____________|" << endl;
   cout << "     |[][][][][][]|" << endl;
   cout << "   __| __         |__" << endl;
   cout << "  |  ||. |   ==   |  |" << endl;
   cout << " (|  ||__|   ==   |  |)" << endl;
   cout << "  |  |[] []  ==   |  |" << endl;
   cout << "  |  |____________|  |" << endl;
   cout << "  /__\\            /__\\" << endl;
   cout << "   ~~              ~~" << endl;
   cout << endl;
}

