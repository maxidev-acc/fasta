#include "Nucleotide.h"
#include <string>

Nucleotide::Nucleotide(const std::string &id)
 : id(id)
{
    //std::cout<<"Init Nuc"<<std::endl;
}




Adenin::Adenin(const std::string &id)
: Nucleotide(id)
{
    //std::cout<<"Init Adenin"<<std::endl;
}
void Adenin::getChemicalInfoAdenin(){
    std::cout<< molecule << identififer <<std::endl;
}


Guanin::Guanin(const std::string &id)
: Nucleotide(id)
{
    //std::cout<<"Init Guanin"<<std::endl;
}
void Guanin::getChemicalInfoGuanin(){
    std::cout<< molecule << identififer <<std::endl;
}


Cytosin::Cytosin(const std::string &id)
: Nucleotide(id)
{
    //std::cout<<"Init Cytosin"<<std::endl;
}
void Cytosin::getChemicalInfoCytosin(){
    std::cout<< molecule << identififer <<std::endl;
}


Thymin::Thymin(const std::string &id)
: Nucleotide(id)
{
    //std::cout<<"Init Thymin"<<std::endl;
}
void Thymin::getChemicalInfoThymin(){
    std::cout<< molecule << identififer <<std::endl;
}