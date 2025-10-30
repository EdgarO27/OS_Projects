#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <sstream>
#include <vector>
#include <chrono>

// BASED ON A SINGLE CORE PROCESSOR  


//Process states 
/*
    Ready:

        Process that are ready for the CPU are in a queue for ready Processes
    
    Running:

        Process enters Running when it is chosen for execution

    Blocked:

        Process may be terminated either from running state by completing execution or being killed
*/

//Build a QUEUE 

// Key - Value Pair

//  Job1 - 9

int main(){
    //define reading file variable
    std::ifstream myfile("jobs.txt");

    // Using map for key value pairs 
    // std::map<std::string, int> jobs;

    //Still dont know how to use pairs
    // std::pair<std::string, int > pair;

    // Job Name
    std::string name;
    
    //Definig clock in current time counting in seconds using the chrono library
    
    // index
    int field;

    // Time of Job
    int jobTime;

    // Time when starting the program
    auto start = std::chrono::system_clock::now();
    // if File doesnt exist
    if(!myfile){
        std::cout << " Failed to open file. \n" << std::endl;
    }

    std::string line;

    while( std::getline(myfile,line)){

        std::istringstream ss(line);
        // std::string token;

        // std::vector<std::string> fields;
        // int num;
        // std::string jobName;
        // While that uses get line using ss to grab and then put it in token and delimiter where it stops 
        // it stops in newline so end of the line 
      
        //     fields.push_back(token);

        // ss >> token ;
        // std::cout << "This is the jobname" << jobName << std::endl;
        // std::cout << "This is the number for seconds: " << num << std::endl;
        

        // for (auto i : fields){
        //     std::cout << i << ' ' << std::endl;
        // }
        std::string jobName;
        // Using istringstream to grab per line 
        
        ss >> jobName;
        // Now make it grab the string first and then the time which basically 
        // line 1 = string
        // line 2 = double 
        // in this pattern 
        std::cout << jobName << std::endl;
    }
    
    // THIS IS CHRONO time of how long it took to complete
    std::chrono::duration<double> dur = std::chrono::system_clock::now() - start;

    std::cout << dur.count() << std::endl;
}