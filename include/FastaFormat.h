#pragma once
#include "Nucleotide.h"
#include "Sequence.h"
#include "FastaHeader.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class FastaFormat
{
    public:
        FastaFormat(int id);
        void setFastaHeader(FastaHeader * newHeader){ head = newHeader;}
        void setFastaSequence(Sequence * newSeq){ seq = newSeq;}
        void printFastaFormat()
        { cout<< head->getHeaderAsString()<<endl;
        }

    private:
       

    protected:
        int id;
        FastaHeader *head;
        Sequence *seq;
       

    
};

class FastaFormatDNA : FastaFormat
{
    public:
        FastaFormatDNA(int id);
        void setFastaHeader(FastaHeader* newHeader){ head = newHeader;}
        void setFastaSequence(NucleotideSequence*   newNucSeq){ seq = newNucSeq;}
        void printFastaFormatDNA()
        { cout<< head->getHeaderAsString()<<endl;
          cout <<seq->getNucleotidesequenceAsString()<<endl;
        }

    private:
       

    protected:
        int id;
        FastaHeader *head;
        NucleotideSequence *seq;
       

    
};