#include "Sequence.h"
#include "Nucleotide.h"
#include <string>

Sequence::Sequence(const std::string &sequenceInput)
    : sequence(sequenceInput)
   
{
   cout<<"Init a Seqeunce"<<endl;
}


NucleotideSequence::NucleotideSequence(const std::string &sequenceInput)
    : Sequence(sequenceInput)
{
 cout <<"\nInit a new nucleotideSequence"<<endl;
}

void NucleotideSequence::addNucleotideToSequence(Nucleotide  *nuc){
        seq.push_back(nuc);


}

std::string NucleotideSequence::getNucleotidesequenceAsString(){
    string  seqAsString="";
    for( auto *i :seq){
        auto unit = i->getIdentifier();
        seqAsString += unit;
    };
    return seqAsString;
}

