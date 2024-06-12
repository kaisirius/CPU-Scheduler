#include "Process.h"
#include<bits/stdc++.h>
using namespace std;

vector<Process> processes;

Process::Process(int process_id,int arrival_time,int burst_time) : process_id(process_id), arrival_time(arrival_time), burst_time(burst_time), remaining_time(burst_time), priority(0), start_time(0), finish_time(0), wait_time(0), turn_around_time(0) {}
Process::Process(int process_id,int arrival_time,int burst_time,int priority) : process_id(process_id), arrival_time(arrival_time), burst_time(burst_time), remaining_time(burst_time), priority(priority), start_time(0), finish_time(0), wait_time(0), turn_around_time(0) {}
  
int Process::getID() {return process_id;}
int Process::getAT() {return arrival_time;}
int Process::getBT() {return burst_time;}
int Process::getPriority() {return priority;}
int Process::getST() {return start_time;}
int Process::getFT() {return finish_time;}
int Process::getRT() {return remaining_time;}
int Process::getWT() {return wait_time;}
int Process::getTAT() {return turn_around_time;}


void Process::setST(int time) {start_time = time;}
void Process::setFT(int time) {finish_time = time;}
void Process::setRT(int time) {remaining_time = time;}
void Process::setWT(int time) {wait_time = time;}
void Process::setTAT(int time) {turn_around_time = time;}


void print_all_processes(){
  for(auto process:processes){
    cout<<"PID: "<<process.getID()<<" "<<"AT: "<<process.getAT()<<" "<<"BT: "<<process.getBT()<<" "<<"Priority: "<<process.getPriority();
    cout<<" "<<"ST: "<<process.getST()<<" "<<"FT: "<<process.getFT()<<" "<<"RT: "<<process.getRT()<<" "<<"WT: "<<process.getWT()<<" "<<"TAT: "<<process.getTAT();
    cout<<endl;
  }
}