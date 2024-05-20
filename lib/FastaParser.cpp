#include "Nucleotide.h"
#include "FastaHeader.h"
#include "Sequence.h"
#include "FastaParser.h"
#include "FastaFormat.h"
#include "FastaFile.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>




using namespace Utility;

std::string Utility::readNextCSString(std::stringstream &ss)
{
    std::string strField;
    getline(ss, strField, ',');

    auto start = strField.find_first_not_of(" \t");
    if (start == std::string::npos)
        return "";

    auto end = strField.find_last_not_of(" \t");
    return strField.substr(start,end - start + 1);
}


void Utility::parseStringToNucleotideSequence(const std::string &seqLineAsString, NucleotideSequence *subseq){
    //std::cout<<"\n>> Parsing string to Seq-Object : "<< seqLineAsString <<std::endl;
    char adeninC = 'A';
    char thyminC = 'T';
    char cytosinC = 'C';
    char guaninC = 'G';
    for(auto n : seqLineAsString){

        //std::cout <<n<< std::endl;
      
        if (n == adeninC){ 
            auto adenin =  new Adenin("0");
            subseq->addNucleotideToSequence(adenin);
            };
     
        if (n == thyminC){ 
            auto thymin =  new Thymin("0");
            subseq->addNucleotideToSequence(thymin);
            };

        if (n == guaninC){ 
            auto guanin =  new Guanin("0");
            subseq->addNucleotideToSequence(guanin);
            };
        if (n == cytosinC){ 
            auto cytosin =  new Cytosin("0");
            subseq->addNucleotideToSequence(cytosin);
            };



};
}



void Utility::readDNAFastaFormatFromFile(const std::string &i_strFileName, FastaFileDNA *newFastaFile, DevLogger *mode)
{
    std::ifstream fFasta("..\\data\\" + i_strFileName);
    char seperator = '>';
    if (fFasta.is_open())
    {
        std::string strLine;
        getline(fFasta, strLine);
        //auto *newFastaFile = new FastaFileDNA();

        while (!fFasta.eof())
        {
            
            
            char firstChar = strLine[0];

            if (firstChar == seperator){
                mode->newEntryLog();
                auto *fasta = new FastaFormatDNA(0);
                auto *head = new FastaHeader();
                auto *seq = new NucleotideSequence();
                
                head->setHeader(strLine);
                
                while (!fFasta.eof()){

                    getline(fFasta, strLine);
                    char firstCharInner = strLine[0];
                    //std::cout<<"Adding Seq line:" << strLine <<std::endl;
                    parseStringToNucleotideSequence(strLine, seq);
                    getline(fFasta, strLine);
                    firstCharInner = strLine[0];
                    if (firstCharInner == seperator) { break;};
                }

            
            
            fasta->setFastaHeader(head);
            fasta->setFastaSequence(seq);
            fasta->printFastaFormatDNA();

            
            newFastaFile->addFastaFormatEntrieDNA(fasta);
            }
            
            
            else {
                getline(fFasta, strLine);

            }

        }
        fFasta.close();        

    }
    else{ std::cout<< "Could not find file"<<std::endl;};

    

        

}




DevLogger::DevLogger(std::string active)
    : isactive(active)
{
    if (isactive =="dev"){
        std::cout<<">>Dev Mode"<<std::endl;
    }
}

void DevLogger::newEntryLog(){
    if (this->isactive == "dev") {
    std::cout<<"___________________________________________"<<std::endl;
    std::cout<<"\nNew Fasta Format Entry for"  <<std::endl;
};
}

