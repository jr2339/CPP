//
//  main.cpp
//  Mass
//
//  Created by jr2339 on 6/2/17.
//  Copyright © 2017 jr2339. All rights reserved.
//
/*
 This program computes energy from a given mass using
 Einstein's mass-to-enery conversion equation
 
 Input: the mass(in kilograms) being converted to energy
 Output: the amount of energy (in kilograms) corresponding to mass
 */

#include <iostream>   //cin, cout, <<, >>
#include <cmath>      //pow()
using namespace std;


int main(int argc, const char * argv[]) {
    const double SPEED_OF_LIGHT = 2.997925e8;    //meters/sec
    
    double mass;
    
    cout << "To find the amount of energy obtained from a given mass, \n"
            "Enter a mass (in kilograms): ";
    
    cin >> mass;  //get mass
    
    double energy = mass * pow(SPEED_OF_LIGHT, 2);
    
    cout << mass << " kilograms of matter will release\n"
         << energy << " kikojoules of energy. \n";
    
    
    
    return 0;
}
