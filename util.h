#ifndef SYSTEM_MONITOR_UTIL_H
#define SYSTEM_MONITOR_UTIL_H

#include <string>
#include <fstream>
#include <vector>

// Classic helper function
class Util {

public:

static std::string convertToTime ( long int input_seconds );
static std::string getProgressBar(std::string percent);
static std::ifstream getStream(const std::string &path);
};

#endif