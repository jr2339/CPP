//
//  main.cpp
//  Recycling
//
//  Created by jr2339 on 6/2/17.
//  Copyright © 2017 jr2339. All rights reserved.
//
/*
 This program calculates miles per gallon, fuel cost per mile and
 total cost for a truck on a recycling pick-up route
 
 Input: a router number, total miles travled, total fuel consumed,
        unit cost of the fuel, and other operating costs
 
 Output: the miles per gallon, total cost for the traveling the route,
         and the cost per mile
 */





#include <iostream>      //cin, cout, <<, >>, fixed, showpoint
#include <iomanip>       //setprecision(), setw()
using namespace std;

int main() {
    int route;  //route number
    cout << "Enter your route number: ";
    cin >> route;
    
    double miles,                    //miles traveled
           gallonsOfFuel,            //gallons used
           unitFuelCost,            //fuel cost per gallon
           otherOperationCost;      //other operating costs
    
    cout << "Enter: \n\total miles traveled,"
         << "\n\tgallons of the fuel used,"
         << "\n\tfuel cost per gallon, and"
         << "\n\tother operating costs (total):"
         << "\n\t---->";
    cin >> miles >> gallonsOfFuel
        >> unitFuelCost >> otherOperationCost;
    
    double milesPerGallon = miles/gallonsOfFuel,
           fuelCost = unitFuelCost * gallonsOfFuel,
           totalTripCost = fuelCost + otherOperationCost,
           costPerMile = totalTripCost / miles;
    
    cout << showpoint << fixed << setprecision(2)
         << "For Route #" << route << ":\n"
         << "\n\tMiles per gallon: " << setw(8) << milesPerGallon
         << "\n\total cost:    $   " << setw(8) << totalTripCost
         << "\n\tCost per mile: $  " << setw(8) << costPerMile
         <<endl;
    
    return 0;
}
