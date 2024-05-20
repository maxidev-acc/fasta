#include "Nucleotide.h"
#include "FastaHeader.h"
#include "FastaFormat.h"
#include "FastaFile.h"
#include "Aminoacids.h"
#include <string>


using namespace std;


Aminoacid::Aminoacid(){


}


Arginin::Arginin()
    : Aminoacid()
{
    std::cout<<"Arginin"<<std::endl;

}


Lysin::Lysin()
    : Aminoacid()
{
    std::cout<<"Lysin"<<std::endl;

}