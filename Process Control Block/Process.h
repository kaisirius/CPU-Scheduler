#ifndef PROCESS_H
#define PROCESS_H

class Process {
  private:
    int process_id;
    int arrival_time;
    int burst_time;
    int priority;
    int start_time;
    int finish_time;
    int remaining_time;
    int wait_time;
    int turn_around_time;

  public:
    Process(int process_id, int arrival_time, int burst_time);
    Process(int process_id, int arrival_time, int burst_time, int priority);
    
    int getID();
    int getAT();
    int getBT();
    int getPriority();
    int getST();
    int getFT();
    int getRT();
    int getWT();
    int getTAT();

    void setST(int time);
    void setFT(int time);
    void setRT(int time);
    void setWT(int time);
    void setTAT(int time);
};

#endif 
