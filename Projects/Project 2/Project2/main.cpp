/* 
 * File:   main.cpp
 * Author: Huda Milbes
 * Project 2
 *
 * Created on July 29, 2014, 11:55 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void drawPicture();

void monsterRoom (int & bananas, int & oranges, string monster);

void genieRoom (int & bananas, int & oranges);

void pictureRoom ();


int main(int argc, char** argv) {
    
   string monstername = " ";
   
   int bananas = 5;
   
   int oranges = 3;
   
   int orientation = 0;
   
   string doornumber = " ";
   
   int score = 0;
   
   string fname = " "; //First Name
   
   string lname = " "; //Last Name
   
   string monster = " ";
   
   float age;
   
   //Enter Player's Information
   //Input first name
   cout << "First Name: ";
   
   cin >> fname;
   
   cout << endl;
   
   
   //Input last name
   cout << "Last Name: ";
   
   cin >> lname;
   
   cout << endl; 
   
   
   //Input age
   cout << "Age: ";
   
   cin >> age;
   
   cout << endl;
   

   cout << "Monster: ";
   
   cin >> monster;
   
   cout << endl;
   
   
   //Used for random
   srand (500);
   
   srand (time(0)); 
   

   while (doornumber != "exit")
   {
       cout << fname << " " << lname << ", you are in a room with 4 doors.";
       
       cout << endl;
       
       cout << "You are carrying " << bananas << " bananas and " << oranges 
       << " oranges." << endl;
       
       cout << endl;
       
       //Enter 1 out of 4 possible directions
       //North, South, East, West
       cout << "Pick a door to enter by typing the direction it is " 
       << "in (N/E/S/W): ";
       
       cin >> doornumber;
       
       cout << endl;
    
      
       while( (doornumber != "W") && (doornumber != "E") && (doornumber != "N") 
           && (doornumber != "S") )
           
       {
           
           //Enter 1 out of 4 possible directions
           //North, South, East, West
           cout << "Pick a door to enter by typing the direction it is in "
           << "(N/E/S/W): ";
           cin >> doornumber;
           cout << endl;
           
       }
       
       
       //Sets a random orientation
       orientation = rand() % 2;
       
    
       //Possible Orientation 1
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
       
       
       
       //Possible Orientation 2
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
           else if(doornumber == "W")
           {
               pictureRoom ();
           }
       }
       
    
    
   }

   //End Game
   //Calculate Score
   cout << "You found the exit!" << endl;
   
   score = bananas + oranges;
   
   cout << "Your score is " << score << " (" << bananas << " bananas and " 
   << oranges << " oranges)." << endl;  
   
   cout << "Bye bye!!!" << endl;


    return 0;
}


//Possible room
//Points reset to zero
void monsterRoom (int & bananas, int & oranges, string monster)
{
   bananas = 0;
   
   oranges = 0;
   
   cout << "WATCH OUT!!" << endl;
   
   cout << monster << " attacks you and steals all of your bananas and " 
   << "oranges." << endl;
   
   cout << endl;
}


//Possible room
//Three points added to current score
void genieRoom (int & bananas, int & oranges)
{
   bananas = bananas + 2;
   
   oranges = oranges + 1;
   
   cout << "!!POOF!!" << endl;
   
   cout << "A genie pops out and grants you 2 bananas and 1 orange.";
   cout << endl;
   
}


//Possible Room
//Picture Room
void pictureRoom ()
{
   cout << "You found a picture!" << endl;
   
   drawPicture();
}


//Displays picture of a house
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
