#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <sstream>
#include "FastaFile.h"

#include <vector>


class DevLogger
{
    public:
        DevLogger(std::string active);
        DevLogger(){};
        void newEntryLog();
        void setStatus(std::string& status){ isactive = status; std::cout <<"Dev Mode"<<std::endl;}
        void finalFastaFile() {std::cout<<">>> Cout of Whole Fasta File:"<<std::endl;}
    private:
    protected:
        std::string isactive; 
};

namespace Utility
{
    // Funktionsdeklarationen, wie sie für den Aufruf der Funktionen nnotwendig sind.
    std::string readNextCSString(std::stringstream &ss);
    void readDNAFastaFormatFromFile(const std::string &i_strFileName, FastaFileDNA *newFastaFile, DevLogger *mode);
    void writeFastaFormatToFile();
    void parseStringToNucleotideSequence(const std::string &i_strFileName, NucleotideSequence *subseq);
    
}

