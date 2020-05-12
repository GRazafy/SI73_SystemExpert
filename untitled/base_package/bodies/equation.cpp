//
// Created by gabriel on 12/05/2020.
//

#include "../headers/equation.h"

equation::equation(std::vector<std::string> externalPremisses,std::string externalConclusion):premisses(externalPremisses),conclusion(externalConclusion){

}

std::string equation::toString(){
    std::string toReturn = "";
    if (!premisseIsEmpty()) {
        toReturn = premisses[0];
        for (int i = 1; i < premisses.size(); ++i) {
            toReturn += "+" + premisses[i];
        }
        toReturn += "=>" + conclusion +"\n";
    }

    return toReturn;
}

bool equation::premisseIsEmpty(){
    return premisses.empty();
}

bool equation::inPremisses(std::string nomHyp){
    for(std::string e: premisses){
        if(e == nomHyp){
            return true;
        }
    }
    return false;
}

void equation::removeFromPremisses(hypothese hyp){
    for (auto it = premisses.begin(); it != premisses.end(); it++) {
        // remove odd numbers
        if (*it == hyp.getNom()) {
            // Notice that the iterator is decremented after it is passed
            // to erase() but before erase() is executed

            premisses.erase(it--);
        }
    }
}

equation::~equation() {}

std::string equation::getConclusion(){
    return conclusion;
}