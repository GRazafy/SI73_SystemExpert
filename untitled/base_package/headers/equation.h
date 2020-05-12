//
// Created by Gabriel on 12/05/2020.
//

#ifndef EQUATION_H
#define EQUATION_H

#include <exception>
#include <iostream>
#include <vector>
#include <iterator>
#include "hypothese.h"
#include <algorithm>

class equation {
private:
    std::vector<std::string> premisses;
    std::string conclusion;

public:
    equation(std::vector<std::string> premisses, std::string conlusion);
    ~equation();
    std::string toString();
    bool premisseIsEmpty();
    std::string getConclusion();
    void removeFromPremisses(hypothese hyp);


    bool inPremisses(std::string nomHyp);
};


#endif //EQUATION_H
