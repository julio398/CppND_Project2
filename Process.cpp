#include "Process.h"
#include "ProcessParser.h"
#include <string>

using std::string;

void Process::setPid(int pid){
    this->pid = pid;
}
string Process::getPid() const {
    return this->pid;
}
string Process::getUser() const {
    return this->user;
}
string Process::getCmd() const {
    return this->cmd;
}
int Process::getCpu() const {
    return stoi(this->cpu);
}
int Process::getMem() const {
    return stoi(this->mem);
}
string Process::getUpTime() const {
    return this->upTime;
}

string Process::getProcess(){
    if(!ProcessParser::isPidExisting(this->pid))
        return "";
    this->mem = ProcessParser::getVmsSize(this->pid);
    this->upTime = ProcessParser::getProcUpTime(this->pid);
    this->cpu = ProcessParser::getCpuPercent(this->pid);
	//TODO: finish the string! this->user + "   "+ mem...cpu...upTime...;
    return (this->pid + "   " 
                    + this->user
                    + "   "
                    + this->cpu.substr(0,5)
                    + "     "
                    + this->mem.substr(0,5)
                    + "     "
                    + this->upTime.substr(0,5)
                    + "    "
                    + this->cmd.substr(0,30)
                    + "...");
            
}

