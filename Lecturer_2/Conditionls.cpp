#include<iostream>
using namespace std;

int main () {

    // //Declare a integger type variable
    // int age;

    // //print a message to the user 
    // cout << "Enter Your Age:" << endl;

    // //take input into the user defined variable
    // cin >> age;

    // //if condition
    // if (age >= 18) {
    //     cout << "You are eligible to vote" << endl;
    // }

    // //else codition
    // else {
    //     cout << "You are not eligible to vote" << endl;
    // }

    int marks;

    cout << " Enter your marks:";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A Grade" << endl;
    }

    else {
        if (marks >= 80){
            cout << "B Grade" << endl;
        }
        else {
            if (marks >= 60) {
                cout << "C Grade" << endl;
            }
            else {
                if (marks >= 40) {
                    cout << "D Grade" << endl;
                }
                else {
                    cout << "F Grade" << endl;
                }
            }
        }
    }


    //if-elseis-else

    if (marks >=90)
    {
        cout << "A Grade" << endl;
    }
    else if (marks >= 80)  
    {
        cout << "B Grade" << endl;
    }
    else if (marks >= 60){
        cout << "C Grade" << endl;
    }
    else if (marks >= 40){
        cout << "D Grade" << endl;
    }
    else {
        cout << "F Grade" << endl;
    }
    
    
    

}