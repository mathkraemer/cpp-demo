#include <string>
#include <ctime>
#include "lib.hpp"


int process(char* a,  char* b){
    if (a==0 || b==0){
        std::string r = std::string(a) + std::string(b);
        return r.length();
    }
    return 0;
}

std::string getCurrentTimeAsString() {
        std::time_t now = std::time(nullptr);
        std::tm* localTime = std::localtime(&now);

        char* timeStr = std::asctime(localTime);

        std::string result(timeStr);
        if (!result.empty() && result.back() == '\n') {
            result.pop_back();
        }
        return result;
    }
