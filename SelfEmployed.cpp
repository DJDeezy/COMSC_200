//
//  selfEmployed.cpp
//  COMSC_200_Classwork6
//
//  Created by Diego Jimenez on 3/24/15.
//  Copyright (c) 2015 Diego Jimenez. All rights reserved.
//

#include "SelfEmployed.h"

#include <iostream>
using namespace std;

SelfEmployed::SelfEmployed(double salary):Employee(salary) {}

void SelfEmployed::giveRaise(double raise) {
  if(raise > 0)
    Employee::setSalary(getSalary()+raise);
  else
    cout << "ERROR: Raise must be positive....\n\n";
}