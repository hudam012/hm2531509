/* 
 * File:   main.cpp
 * Author: Huda Milbes
 *
 * Created on July 29, 2014, 1:17 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

void score(int& score);
int lowest(int score1, int score2, int score3, int score4, int score5);
void calcAverage(int score1, int score2, int scroe3, int scroe4, int score5);

int main(int argc, char** argv) {  {
    
    int score1, score2, score3, score4, score5;
    
                
               
                cout<<"Scores: \n";
                score(score1);
                score(score2);
                score(score3);
                score(score4);
                score(score5);
                
                
                calcAverage(score1, score2, score3, score4, score5);
            }
    return 0;
}


int lowest(int score1, int score2, int score3, int score4, int score5)
{
    int low = score1;
    low = min(low, score2);
    low = min(low, score3);
    low = min(low, score4);
    return min(low, score5);
}
void score(int& score)
{
    const short MAX_SCORE = 100;//Maximum score
    do{
        cout<<"Enter score(0-100): ";
        cin>>score;
        if(score<0 || score>MAX_SCORE)
            cout<<"Invalid score, try again"<<endl;
    }while(score<0 || score>MAX_SCORE);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    float avrg = (score1+score2+score3+score4+score5-lowest(score1, score2, score3, score4 ,score5))/static_cast<float>(4.0);
    cout<<"Average: "<<avrg<<endl;
}
