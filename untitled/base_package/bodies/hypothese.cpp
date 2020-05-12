//
// Created by gabri on 12/05/2020.
//
#include "../headers/hypothese.h"

hypothese::hypothese(std::string extnom): nom(extnom){}


std::string hypothese::toString(){
    return nom;
}

std::string hypothese::getNom(){
    return nom;
}