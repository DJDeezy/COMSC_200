//
//  main.cpp
//  COMSC_200_Classwork6
//
//  Created by Diego Jimenez on 3/24/15.
//  Copyright (c) 2015 Diego Jimenez. All rights reserved.
//

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

#include "Employee.h"
#include "Employee.h" // testing ifndef

#include "SelfEmployed.h"
#include "SelfEmployed.h" // testing ifndef

int main() {
  
  bool pass = false;//, done = false;
  string input;
  
  SelfEmployed e1(0);
  
  while(!pass) {
    cout << "Enter salary: $";
    getline(cin, input);
    cout << endl;
    
    try {
      //Employee e1(atof(input.c_str()));
      e1.setSalary(atof(input.c_str()));
      cout << "ID: " << e1.getId() << "\nSalary: $" <<  e1.getSalary() << endl;
      pass = true;
      
    } catch (Employee::NegSalary nS) {
      cout << "ERROR: " << nS.getNegSalary() << " is negative\n\n";
    }
  }
  
  while(input != "d" && input != "D") {
    cout << "Enter raise amount (\'D\' to quit): $";
    getline(cin, input);
    cout << endl;
    
    e1.giveRaise(atof(input.c_str()));
    cout << "ID: " << e1.getId() << "\nSalary: $" <<  e1.getSalary() << endl;
  }  
  
  
  return 0;
}
