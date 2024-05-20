#pragma once
#include "Nucleotide.h"
#include "Sequence.h"
#include "FastaHeader.h"
#include "FastaFormat.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Aminoacid
{
    public:
        Aminoacid();
        
    private:
       

    protected:
        
         
};


class Arginin : Aminoacid
{
    public:
        Arginin();
        void printCharge(){
            std::cout << charge<<std::endl;
        }
         void printOneLetter(){
            std::cout << oneLetter<<std::endl;
        }

    private:
       

    protected:
        
        std::string oneLetter = "R";
        std::string charge = "positive";
       
         
};

class Lysin : Aminoacid
{
    public:
        Lysin();
        void printCharge(){
            std::cout << charge<<std::endl;
        }
         void printOneLetter(){
            std::cout << oneLetter<<std::endl;
        }
    private:
       

    protected:
        std::string oneLetter = "K";
        std::string charge = "positive";
       
         
};