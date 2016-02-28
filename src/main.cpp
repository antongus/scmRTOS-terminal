/**
*  @file main.cpp
*
*  Main project file.
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#include "hw.h"
#include <scmRTOS.h>

TProcess0 process0;
TProcess1 process1;
TProcess2 process2;

int main()
{
    // configure IO pins
	GreenLed::Mode(OUTPUT);
	GreenLed::Off();

    // run
    OS::run();
}

namespace OS
{

	template <>
	OS_PROCESS void TProcess0::exec()
	{
		for(;;)
		{
			OS::sleep(10);
		}
	}

	template <>
	OS_PROCESS void TProcess1::exec()
	{
		for(;;)
		{
			sleep(100);
		}
	}

	template <>
	OS_PROCESS void TProcess2::exec()
	{
		for (;;)
		{
			GreenLed::On();
			sleep(20);
			GreenLed::Off();
			sleep(980);
		}
	}

} // namespace OS

#if scmRTOS_IDLE_HOOK_ENABLE
void OS::idle_process_user_hook()
{
	__WFI();
}
#endif
