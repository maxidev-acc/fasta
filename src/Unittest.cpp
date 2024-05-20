#include <iostream>
#include "Sequence.h"
#include "Nucleotide.h"
#include "FastaFormat.h"
#include "FastaHeader.h"
#include "FastaParser.h"
#include "FastaFile.h"
#include "Aminoacids.h"
using namespace std;



int main(){
    cout<<"Unit Test"<<endl;
    auto aa = new Aminoacid();
    auto lys  = new Lysin();
    lys->printCharge();
    lys->printOneLetter();
    auto arg = new Arginin();
    arg->printOneLetter();
    arg->printCharge();

}