//
//  main.cpp
//  example
//
//  Created by jr2339 on 5/31/17.
//  Copyright © 2017 jr2339. All rights reserved.
//

/*
 Program that greets the user.
 Input:  the name of the User
 Output: a personalized greeting
 */

#include <iostream>           //cin, cout, <<, >>
#include <string>             //string
using namespace std;

/*
    using namespace std; will be present in nearly all of our programs
    It informs the compiler that we want these to be to be the standard 
 libraries from the namespace name std.
    Without it, we would have to qualify each blibray item(such as cout) 
    Without prefix std::; for example:
    std::cout << "what is your first name? ";
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    cout <<"What is your first name?\n";
    //the << operator will ouput a message to the screen
    //(cout) that prompts the user to enter her or his first name
    
    string firstname;
    //the varibale firstname will a character string
    
    cin >> firstname;
    //the >> operator to read the character string entered by
    //the user from the keyboard (cin) and stores it in variable

    cout <<"\nWelcome to C++, " <<firstname <<"!\n";
    
    return 0;
}
















