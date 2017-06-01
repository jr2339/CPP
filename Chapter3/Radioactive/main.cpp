//
//  main.cpp
//  Radioactive
//
//  Created by jr2339 on 6/1/17.
//  Copyright © 2017 jr2339. All rights reserved.
//
/*
This program computes the amount of a radioactive substance
 remaining after initial amount decays for some period
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter the name of your raioactive substabce: ";
    
    string element;
    cin >> element;
    cout <<"and its half-life (days): ";
    
    double halfLife;
    cin >>halfLife;
    cout << "Enter the initial amount (mg) and a time period (days): ";
    
    double initialAmount, time;
    cin >> initialAmount >> time;
    
    double amountRemaining = initialAmount * pow(0.5, time/halfLife);
    
    cout << "\nFor " << element
         <<" with half-life " << halfLife << " days\n"
         << initialAmount << " mg" << " will be reduced to "
         << amountRemaining << " mg after " << time << " days\n";
    
    return 0;
}
