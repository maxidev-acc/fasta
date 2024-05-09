#include "Nucleotide.h"
#include "FastaHeader.h"
#include "FastaFormat.h"
#include "FastaFile.h"
#include <string>


using namespace std;

FastaFile::FastaFile()
 { cout<<"Fastafile"<<endl;
 
  }


FastaFileDNA::FastaFileDNA()
 :FastaFile()
 { cout<<"Fastafile DNA"<<endl;
 
  }


void FastaFileDNA::printFastaFile(){
    for (auto *ent: fastaFormatEntriesDNA )
    {
        ent->printFastaFormatDNA();

    }


}