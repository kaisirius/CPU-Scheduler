#include<bits/stdc++.h>
using namespace std;

class Process{
  private:
    int process_id;
    int arrival_time;
    int burst_time;
    int priority = 0;
    int start_time = 0;
    int finish_time = 0;
    int remaining_time;
    int wait_time = 0;
    int turn_around_time = 0;
  public:
    Process(int process_id,int arrival_time,int burst_time){
      this -> process_id = process_id;
      this -> arrival_time = arrival_time;
      this -> burst_time = burst_time;
      this -> remaining_time = burst_time;
    }
    Process(int process_id,int arrival_time,int burst_time,int priority){
      this -> process_id = process_id;
      this -> arrival_time = arrival_time;
      this -> burst_time = burst_time;
      this -> remaining_time = burst_time;
      this -> priority = priority;
    }
    int getID() {return this->process_id;}
    int getAT() {return this->arrival_time;}
    int getBT() {return this->burst_time;}
    int getPriority() {return this->priority;}
    int getST() {return this->start_time;}
    int getFT() {return this->finish_time;}
    int getRT() {return this->remaining_time;}
    int getWT() {return this->wait_time;}
    int getTAT() {return this->turn_around_time;}

    void setST(int time) {this->start_time = time;}
    void setFT(int time) {this->finish_time = time;}
    void setRT(int time) {this->remaining_time = time;}
    void setWT(int time) {this->wait_time = time;}
    void setTAT(int time) {this->turn_around_time = time;}


};

vector<Process> processes;

void print_all_processes(){
  for(auto process:processes){
    cout<<"PID: "<<process.getID()<<" "<<"AT: "<<process.getAT()<<" "<<"BT: "<<process.getBT()<<" "<<"Priority: "<<process.getPriority();
    cout<<" "<<"ST: "<<process.getST()<<" "<<"FT: "<<process.getFT()<<" "<<"RT: "<<process.getRT()<<" "<<"WT: "<<process.getWT()<<" "<<"TAT: "<<process.getTAT();
    cout<<endl;
  }
}