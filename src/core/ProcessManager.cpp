#include "ProcessManager.h"
#include <boost/process.hpp>
#include <iostream>

namespace bp= boost::process;

int ProcessManager::runProcess(const std::string& cmd){
    bp::child c(cmd);
    int pid = c.id();
    std::cout <<"Proceso Iniciado con PID: "<< pid<<std::endl;
    c.detach();
    return pid;
}

bool ProcessManager::killProcess(int pid){
    
}