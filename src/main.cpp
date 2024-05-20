
#include <iostream>
#include "Sequence.h"
#include "Nucleotide.h"
#include "FastaFormat.h"
#include "FastaHeader.h"
#include "FastaParser.h"
#include "FastaFile.h"
using namespace std;







void UnitTestBasicConstructors() {
    cout<< "\nUnit Test Constructors"<<endl;
    string id = "Test_ID-01";
    std::string n = "A";
    //auto *nuc = new Nucleotide(id);
    auto *Seq  = new Sequence(id) ;
    auto *a = new Adenin("A");
    a->getChemicalInfoAdenin();
    auto *g= new Guanin("G");
    g->getChemicalInfoGuanin();
    cout<< "\nAll tests passed successfully"<<endl;


    auto nucSeq = new NucleotideSequence(id);
    nucSeq->addNucleotideToSequence(g);
    nucSeq->addNucleotideToSequence(a);
    cout<<nucSeq->getNucleotidesequenceAsString()<<endl;





    //auto *nuc = new Nucleotide(id);
    

    auto *head = new FastaHeader();
    
    auto *fastaFormat = new FastaFormatDNA(1);
    fastaFormat->setFastaHeader(head);
    fastaFormat->setFastaSequence(nucSeq);
    fastaFormat->printFastaFormatDNA();


}










int main(int argc, char *argv[]) {
    


    

    std::cout<<"\nInit new FastaFile Parsing\n"<<std::endl;
    auto log = new DevLogger();
    if (argc > 2){
        std::string mode = argv[2];
        log->setStatus(mode);

    }
    
    
    
    string file = argv[1];
    auto *newFastaFile =  new FastaFileDNA();
    Utility::readDNAFastaFormatFromFile(file, newFastaFile, log); 
    
    log->finalFastaFile();
    newFastaFile->printFastaFile();


}