#pragma once
#include "Nucleotide.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Sequence
{
    public:
        Sequence() {};
        Sequence(const std::string &sequenceInput);
        void setSequence(const std::string &sequenceInput) { sequence = sequenceInput; };
       
    private:
       

    protected:
        
        std::string sequence;
       

    
};


class NucleotideSequence :Sequence 

{
    public:
        NucleotideSequence() {};
        NucleotideSequence(const std::string &sequenceInput);
        void addNucleotideToSequence(Nucleotide *nuc);
        std::string getNucleotidesequenceAsString();
        std::vector <Nucleotide *> getNucleotideSequneceAsVector() { return seq;}
       
    private:
       

    protected:
        
        std::vector<Nucleotide *> seq;
       

    
};



class AminoacidSequence :Sequence 

{
    public:
        AminoacidSequence(const std::string &sequenceInput);
        void addNucleotideToSequence(Nucleotide *nuc);
        std::string getNucleotidesequenceAsString();
    private:
       

    protected:
        
        std::vector<Nucleotide *> seq;
       

    
};
