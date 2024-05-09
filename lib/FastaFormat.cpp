#include "Nucleotide.h"
#include "FastaHeader.h"
#include "FastaFormat.h"
#include <string>


using namespace std;

FastaFormat::FastaFormat(int id)
 :id(id)
 { cout<<"FastaFormat"<<endl;
 
  }


FastaFormatDNA::FastaFormatDNA(int id)
 :FastaFormat(id)
 { cout<<"FastaFormatDNA"<<endl;
 
  }

