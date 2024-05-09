#pragma once

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class FastaHeader
{
    public:
        FastaHeader(){};
        FastaHeader(const std::string &header);
        void setHeader(std::string &header) { headerLine = header; };
        std::string getHeaderAsString(){ return headerLine;}
    private:
       

    protected:
        
        std::string headerLine;
       

    
};