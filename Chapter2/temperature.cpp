//
//  main.cpp
//  Temperature
//
//  Created by jr2339 on 5/31/17.
//  Copyright © 2017 jr2339. All rights reserved.
//

/*
 This program converts a Celsius temperature to Fahrenheit
 Input:  the Celsius temperature
 Output: the corresponding Fahrenheit temperature
 */

#include <iostream> //cin, cout, <<, >>

using namespace std;

int main(int argc, const char * argv[]) {
    //1. Output a prompt for the Celsius temperature to cout
    cout << "Enter the Celsius temperature: \n";
    
    //2.Input a real value from cin and store it in celsius
    double celsius;
    cin >> celsius;
    
    //3.Compute fahrenheit = 1.8 * celsius + 32
    double fahrenheit = 1.8 * celsius + 32;
    
    //4. Output fahrenheit to cout
    cout << celsius << " degrees Celsius is equivalent to "
         << fahrenheit << "degrees Fahrenheit.\n";
    
    return 0;
}
