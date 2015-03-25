//
//  selfEmployed.h
//  COMSC_200_Classwork6
//
//  Created by Diego Jimenez on 3/24/15.
//  Copyright (c) 2015 Diego Jimenez. All rights reserved.
//

#ifndef SelfEmployed_H
#define SelfEmployed_H

#include "Employee.h"

class SelfEmployed: public Employee {
public:
  SelfEmployed(double);
  virtual void giveRaise(double);
};


#endif
