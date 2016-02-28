/**
*  @file     processes.h
*
*  Declarations for all processes in project
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#ifndef PROCESSES_H_INCLUDED
#define PROCESSES_H_INCLUDED

#include <scmRTOS.h>

typedef OS::process<OS::pr0, 600> TProcess0;
typedef OS::process<OS::pr1, 600> TProcess1;
typedef OS::process<OS::pr2, 600> TProcess2;
typedef OS::process<OS::pr3, 1200> TTerminalProcess;

extern TProcess0 process0;
extern TProcess1 process1;
extern TProcess2 process2;
extern TTerminalProcess terminalProcess;

#endif // PROCESSES_H_INCLUDED
