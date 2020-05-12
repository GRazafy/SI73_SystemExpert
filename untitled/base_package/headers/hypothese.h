//
// Created by Gabriel on 12/05/2020.
//

#ifndef HYPOTHESE_H
#define HYPOTHESE_H

#include <exception>
#include <iostream>

class hypothese {
private:
    std::string nom;
public:
    hypothese(std::string nom);
    std::string toString();
    std::string getNom();
};


#endif //HYPOTHESE_H

