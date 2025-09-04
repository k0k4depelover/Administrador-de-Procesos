#ifndef PROCESSMANAGER_H
#define PROCESSMANAGER_H
#include <string>

class ProcessManager{
    public:
    int runProcess(const std::string& cmd);
    bool killProcess(int pid);
};
#endif // PROCESSMANAGER_H