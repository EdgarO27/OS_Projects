#include <iostream>
#include <fstream>
#include <string>
#include <utility>

int main(){
    std::ifstream myfile;
    std::string line;
    int job ;
    myfile.open("jobs.txt");
    int time ;
    if( myfile.is_open() ){
    
        while ( myfile.good() ){
            
            myfile >> line;
            myfile >> job ;
        }
        std::cout << line << std::endl;
        std::cout << job ;
    myfile.close();
    }
}