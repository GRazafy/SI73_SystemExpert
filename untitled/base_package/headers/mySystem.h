//
// Created by Gabriel on 12/05/2020.
//

#ifndef SYSTEM_H
#define SYSTEM_H

#include <exception>
#include <iostream>
#include "equation.h"

class mySystem {
private:
    std::vector<equation*> equations;
public:
    mySystem(std::vector<equation *> extequations);
    ~mySystem();
    std::string toString();
    std::vector<equation *> getEquations();
};


#endif //SYSTEM_H

