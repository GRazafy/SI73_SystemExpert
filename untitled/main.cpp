#include <iostream>
#include "base_package/headers/equation.h"a
#include "base_package/headers/mySystem.h"

int main() {
    std::cout << " ##  Systeme Expert Rousseaux-Razafindratsima ##" <<std::endl;

    hypothese A = hypothese("A");
    hypothese B = hypothese("B");
    std::vector<hypothese> hypotheses = {A,B};

    equation firstEq = equation({"A","B"},"X");
    equation secondEq = equation({"D","E"},"Z");
    std::vector<equation*> myEquation = {&firstEq,&secondEq};

    class::mySystem sys = mySystem(myEquation);

    std::cout << "__Hypotheses : "<<std::endl;
    for(hypothese hypo : hypotheses){
        std::cout << "|" << hypo.toString() ;
    }
    std::cout << std::endl;
    std::cout << "__System : "<< sys.toString() << std::endl;

    for (hypothese hyp:hypotheses){
        for(equation *eq :sys.getEquations()){
            if(eq->inPremisses(hyp.getNom())){
                eq->removeFromPremisses(hyp);
                if(eq->premisseIsEmpty()){
                    hypotheses.push_back(hypothese(eq->getConclusion()));
                }
            }
        }
    }
    std::cout << "__Result : "<< std::endl;
    std::cout << "__Hypotheses : ";
    for(hypothese hypo : hypotheses){
        std::cout << "|" << hypo.toString() ;
    }
    std::cout << std::endl;
    std::cout << "__System : "<< sys.toString() << std::endl;
}
