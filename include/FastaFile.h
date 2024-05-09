#pragma once
#include "Nucleotide.h"
#include "Sequence.h"
#include "FastaHeader.h"
#include "FastaFormat.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class FastaFile
{
    public:
        FastaFile();
        
    private:
       

    protected:
        int id = 0;
        std::vector<FastaFormat> fastaFormatEntries;
       

    
};

class FastaFileDNA : FastaFile

{
    public:
        FastaFileDNA();
        void addFastaFormatEntrieDNA(FastaFormatDNA * entrie){
            fastaFormatEntriesDNA.push_back(entrie);

        }
        void printFastaFile();
    private:
       

    protected:
        int id = 0;
        std::vector<FastaFormatDNA * > fastaFormatEntriesDNA;
       

    
};