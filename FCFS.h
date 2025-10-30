#include <map>
#include <string>
#include <queue>

//https://stackoverflow.com/questions/10113028/how-should-i-start-making-a-fcfs-scheduling-program-in-c-or-c
//THIS LINK IS TO HELP FOR FCFS ALGORITHM 


/*          BATCH SYSTEM
    To maximize jobs per hour
    Minimize time between submisson and termination
    Keeps CPU busy all the time

    Implemented with FIFO QUEUE
        Process enters the ready Queue
        It is put on the end of the queue

    When CPU is FREE,
        Scheduler chooses a process form the head of a ready QUEUE

    Turnaround Time is long 


    Variables needed:
        Process Id:
        CPU Time

    Calculations:
        Average Turnaround Time : ( count of times per process where it ends) / # of process

    Process States (BOOL):
        Running
        Blocked 
        Ready

*/

struct Node{

    std::string name;
    int priority;
    int runningTime;

};


/*
Operations

ENQUEUE

DEQUEUE

SHOWFRONT

ISEMPTY

*/


//ENQUEUE : Adding a Node at the end

void enqueue(){

}
// DEQUEUE : Removing node from the front of Array
void dequeue(){

}

int showfront(){

}

bool isEmpty(){

}
