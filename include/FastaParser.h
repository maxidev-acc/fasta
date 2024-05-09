#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <sstream>
#include "FastaFile.h"

#include <vector>



namespace Utility
{
    // Funktionsdeklarationen, wie sie für den Aufruf der Funktionen nnotwendig sind.
    std::string readNextCSString(std::stringstream &ss);
    void readDNAFastaFormatFromFile(const std::string &i_strFileName, FastaFileDNA *newFastaFile);
    void writeFastaFormatToFile();
    void parseStringToNucleotideSequence(const std::string &i_strFileName, NucleotideSequence *subseq);
}
