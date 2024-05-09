#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Nucleotide
{
    public:
        Nucleotide(const std::string &id);
        virtual std::string getIdentifier(){ return id;};
    private:
       

    protected:
        string id;
        string type = "Nucleotide";
       

    
};

class Adenin :public Nucleotide
{
    public:
        Adenin(const std::string &id);
        void getChemicalInfoAdenin();
        std::string getIdentifier(){return identififer;};
    private:
    protected:

        string molecule = "Adenin";
        string identififer = "A";
        string type = "Nucleotide";
};

class Guanin :public Nucleotide
{
    public:
        Guanin(const std::string &id);
        void getChemicalInfoGuanin();
        std::string getIdentifier(){return identififer;};
    private:
    protected:

        string molecule = "Guanin";
        string identififer = "G";
        string type = "Nucleotide";
};

class Thymin :public Nucleotide
{
    public:
        Thymin(const std::string &id);
        void getChemicalInfoThymin();
        std::string getIdentifier(){return identififer;};
    private:
    protected:

        string molecule = "Thymin";
        string identififer = "T";
        string type = "Nucleotide";
};

class Cytosin :public Nucleotide
{
    public:
        Cytosin(const std::string &id);
        void getChemicalInfoCytosin();
        std::string getIdentifier(){return identififer;};
    private:
    protected:

        string molecule = "Cytosin";
        string identififer = "C";
        string type = "Nucleotide";
};