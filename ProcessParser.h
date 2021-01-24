#ifndef PROCESS_PARSER_H
#define PROCESS_PARSER_H

#include <algorithm>
#include <iostream>
#include <math.h>
#include <thread>
#include <chrono>
#include <iterator>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cerrno>
#include <cstring>
#include <dirent.h>
#include <time.h>
#include <unistd.h>
#include "constants.h"


using namespace std;
using std::string;

class ProcessParser{
private:
    ifstream stream;

public:
    static string getCmd(string pid);
    static vector<string> getPidList();
    static string getVmsSize(string pid);
    static string getCpuPercent(string pid);
    static long int getSysUpTime();
    static string getProcUpTime(string pid);
    static string getProcUser(string pid);
    static vector<string> getSysCpuPercent(string coreNumber = "");
    static float getSysRamPercent();
    static string getSysKernelVersion();
    static int getNumberOfCores();
    static int getTotalThreads();
    static int getTotalNumberOfProcesses();
    static int getNumberOfRunningProcesses();
    static string getOSName();
    static string PrintCpuStats(
        const vector<string> values1, 
        const vector<string> values2);
    static bool isPidExisting(string pid);
    static vector<string>splitByWhiteSpace(string stringToSplit);
};
// TODO: Define all of the above functions below:
#endif
