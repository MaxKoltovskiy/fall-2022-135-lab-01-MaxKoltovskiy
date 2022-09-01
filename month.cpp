/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1D

Asks the user to input the year and the month(1-12) and prints the number of days in that month, taking leap years into consideration
*/

#include <iostream>
int main(){
    int year,month;

    std:: cout<< "Enter year: ";
    std:: cin>> year;
    std:: cout<< "Enter month: ";
    std:: cin>> month;

    if(month == 2){
        bool leap;

        if(year%4 != 0){
            leap = false;
        }
        else if(year%100 != 0){
            leap = true;
        }
        else if(year%400 != 0){
            leap = false;
        }
        else{
            leap = true;
        }

        if(leap){
            std:: cout<< "29 days"<< std::endl;
        }
        else{
            std:: cout<< "28 days"<< std::endl;
        }
    }
    else if(month== 1||3||5||7||8||10||12){
        std:: cout<< "31 days"<< std::endl;
    }
    else if(month == 4||6||9||11){
        std:: cout<< "30 days"<< std::endl;
    }
}