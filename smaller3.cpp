/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1B

The program asks the user to input 3 integers and then prints the smallest integer
*/

#include <iostream>

int main()
{
    int first, second, third;
    
    std:: cout<< "First Integer: ";
    std:: cin>> first;
    std:: cout<< "Second Integer: ";
    std:: cin>> second;
    std:: cout<< "Third Integer: ";
    std:: cin>> third;

    if(first<second){
        if(first<third){
            std:: cout<< first << " is the smallest integer."<< std::endl;
            return 0;
        }
        
    }
    else{
        if(second<third){
            std:: cout<< second << " is the smallest integer."<< std::endl;
            return 0;
        }
    }
    
    std:: cout<< third << " is the smallest integer."<< std::endl;
    return 0;
}
