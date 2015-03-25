//
//  Employee.h
//  COMSC_200_Classwork6
//
//  Created by Diego Jimenez on 3/24/15.
//  Copyright (c) 2015 Diego Jimenez. All rights reserved.
//

#ifndef Employee_H
#define Employee_H

class Employee {
private:
  int m_Id;
  double m_Salary;
  static int number;
public:
  Employee(double = 0);
  virtual void giveRaise(double)=0;
  void setSalary(double);
  int getId() const { return m_Id; }
  double getSalary() const { return m_Salary; }
  
  class NegSalary {
  private:
    double m_NegSalary;
  public:
    NegSalary(double salary) {
      m_NegSalary = salary;
    }
    double getNegSalary() const { return m_NegSalary; }
  };
};

#endif
