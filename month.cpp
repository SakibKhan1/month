/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 D

This program will make you input month(1-12) and year. Program will tell you amount of days even w/ leap years.
*/

#include <iostream>
using namespace std;

int main()
{
    int y, m;
    cout << "Enter year: ";
    cin >> y;
    cout << "Enter month: ";
    cin >> m;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        cout << "31 days" << endl;
    }else if(m == 4 || m == 6 || m == 9 || m == 11){
        cout << "30 days" << endl;
    }else if(m == 2 && y % 4 == 0 && y % 100 == 0 && y % 400 == 0){
        cout << "29 days" << endl;
    }else if(m == 2){
        cout << "28 days" << endl;
    }


 return 0;

}
