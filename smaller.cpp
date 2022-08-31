/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1A

The program asks the user to input two integers and prints out the smaller integer
*/

#include <iostream>

int main()
{
    int first, second;

    std:: cout<<"First Integer: ";
    std:: cin>>first;
    std:: cout<<"Second Integer: ";
    std:: cin>>second;

    if(first < second){
        std::cout<<first<< " is the smaller integer"<< std::endl;
    } else{
            std::cout<<second<< " is the smaller integer"<< std::endl;
    }

    return 0;
}
