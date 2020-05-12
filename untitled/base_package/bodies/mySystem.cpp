//
// Created by gabri on 12/05/2020.
//
#include "../headers/mySystem.h"

mySystem::mySystem(std::vector<equation*> extequations): equations(extequations)
{}
//Type        Classe::NomFonction()
std::string mySystem::toString(){
    std::string toReturn = "";
    for(equation *e: equations){
        toReturn += e->toString();
    }
    return toReturn;
}
mySystem::~mySystem() {
    for(equation *e: equations){
        delete e;
    }
}

std::vector<equation*> mySystem::getEquations(){
    return equations;
}