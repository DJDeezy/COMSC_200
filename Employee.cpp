//
//  Employee.cpp
//  COMSC_200_Classwork6
//
//  Created by Diego Jimenez on 3/24/15.
//  Copyright (c) 2015 Diego Jimenez. All rights reserved.
//

#include "Employee.h"
#include <exception>

int Employee::number = 0;

Employee::Employee(double salary):m_Id(number+1) {
  setSalary(salary);
  number++;
}

void Employee::setSalary(double salary) {
  if(salary >= 0)
    m_Salary = salary;
  else
    throw NegSalary(salary);
}