/*
  Author: Mohammad Seeam
  Course: COSC 1337 Semester: Spring 2022     Section: DL9  ;  Instructor: Thayer
  Purpose:  Write code for a 3rd Grade math tutor program / quiz.
*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

    int totalQasked, right, wrong=0; //totalQasked is total question asked//
    cout<<"Welcome to the 3rd grade addition test ! "<<endl;
    cout <<"You may enter a negative number at any time to quit early."<<endl;
    cout<<"How many questions would you like ?" ;
    int num_questions; //num_questions is how many questions do you want//
    cin>> num_questions;
    if(num_questions<0){
        exit(0);
    }
    for(int i=1;i<=num_questions;i++){
        int x,y,ans;
        int r1,r2,r3,r4, rr; //random options//
        char rightAns;

        srand(time(0));
        x=rand()%100; 
        y=rand()%(100-x);

        
        r1=(rand()%100); //these are random options of answers//
        r2=(rand()%100);
        r3=x+y;
        r4=rand()%100;
        rr = rand()%40;
        cout<<"Q"<<i<< " of "<< num_questions <<" is "<<x<<"+"<<y<<" = ?"<<endl;

        
        
        if(rr>=0 && rr<=10){
            string str_a = "Option#A) is " + to_string(r3) + "," + " Option#B) is " + to_string(r2) + "," + "  Option#C) is " + to_string(r1) + "," + "  Option#D) is " + to_string(r4);
            rightAns = 'a';
            cout<< str_a<<" " ;//by that I randomized options of answers//
        }else if(rr>=11 && rr<=20){
            string str_b = "Option#A) is " + to_string(r2) + "," + " Option#B) is " + to_string(r3) + "," + "  Option#C) is " + to_string(r1) + "," + "  Option#D) is " + to_string(r4);
            rightAns = 'b';
            cout<< str_b<<" " ;//by that I randomized options of answers//
        }else if(rr>=21 && rr<=30){
            string str_c = "Option#A) is " + to_string(r1) + "," + " Option#B) is " + to_string(r2) + "," + "  Option#C) is " + to_string(r3) + "," + "  Option#D) is " + to_string(r4);
            rightAns = 'c';
            cout<< str_c<<" " ;//by that I randomized options of answers//
        }else if(rr>=31 && rr<=40){
            string str_d = "Option#A) is " + to_string(r1) + "," + " Option#B) is " + to_string(r2) + "," + "  Option#C) is " + to_string(r4) + "," + "  Option#D) is " + to_string(r3);
            rightAns = 'd';
            cout<< str_d <<" " ;//by that I randomized options of answers//
            
        }
        
        string option="";
        cin >> option;
        if(option[0]=='-'){
            cout << "Good bye ! " << endl;
            break;
        }
        char options=tolower(option[0]);

        if (options == rightAns){
            cout<<"Good job ! "<<endl;
            right++;
        }
        else{
            cout<<"Sorry, your answer for question "<<i<<" is incorrect. The correct answer is : "<<r3<<endl;
            wrong++;
        }
        totalQasked++;

    }

    cout << "You got "<<(right*100)/totalQasked << " % "<< "number in the test by attempting "<< totalQasked<<" questions"<< " out of "<< num_questions <<" questions." << endl;
}

/*
Welcome to the 3rd grade addition test ! 
You may enter a negative number at any time to quit early.
How many questions would you like ?7
Q1 of 7 is 83+5 = ?
Option#A) is 88, Option#B) is 72,  Option#C) is 74,  Option#D) is 49 a
Good job ! 
Q2 of 7 is 4+75 = ?
Option#A) is 52, Option#B) is 79,  Option#C) is 99,  Option#D) is 92 b
Good job ! 
Q3 of 7 is 46+8 = ?
Option#A) is 54, Option#B) is 6,  Option#C) is 49,  Option#D) is 31 b
Sorry, your answer for question 3 is incorrect. The correct answer is : 54
Q4 of 7 is 67+29 = ?
Option#A) is 96, Option#B) is 86,  Option#C) is 27,  Option#D) is 27 a
Good job ! 
Q5 of 7 is 95+2 = ?
Option#A) is 24, Option#B) is 97,  Option#C) is 78,  Option#D) is 53 b
Good job ! 
Q6 of 7 is 37+53 = ?
Option#A) is 28, Option#B) is 78,  Option#C) is 92,  Option#D) is 90 a
Sorry, your answer for question 6 is incorrect. The correct answer is : 90
Q7 of 7 is 79+10 = ?
Option#A) is 85, Option#B) is 89,  Option#C) is 31,  Option#D) is 31 c
Sorry, your answer for question 7 is incorrect. The correct answer is : 89
You got 57 % number in the test
*/