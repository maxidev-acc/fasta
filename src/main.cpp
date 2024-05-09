
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







int main() {
    
   
    std::cout <<"Testphase Parser"<<std::endl;
    string file = "file.txt";
    auto *newFastaFile =  new FastaFileDNA();
    Utility::readDNAFastaFormatFromFile(file, newFastaFile); 
    
    std::cout<< ">>>>>>> Finally printing out WHOLE Fasta_File: \n"<<std::endl;
    newFastaFile->printFastaFile();


}