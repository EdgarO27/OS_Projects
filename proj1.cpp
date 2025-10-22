#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <sstream>
#include <vector>

template<typename T> std::string type_name();

using std::pair;

int main(){
    //define reading file variable
    std::ifstream myfile("jobs.txt");

    // Using map for key value pairs 
    std::map<std::string, int> jobs;

    //Still dont know how to use pairs
    std::pair<std::string , int > pair;

    // Job Name
    std::string name;
    
    // index
    int field;

    // Time of Job
    int jobTime ;

    // if File doesnt exist
    if(!myfile){
        std::cout << " Failed to open file. \n";
    }

    std::string line;

    while( std::getline(myfile,line)){

        std::istringstream ss(line);
        std::string token;

        std::vector<std::string> fields;

        while(std::getline(ss,token,'\n')){
            fields.push_back(token);
        }

        for (auto i : fields){
            std::cout << i << ' ';
        }
    }
    
    
}