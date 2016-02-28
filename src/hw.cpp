/**
*  @file hw.cpp
*
*  Project-wide hardware declarations.
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#include "hw.h"

ConsoleUart uart;

OS_INTERRUPT void USART1_IRQHandler()
{
	OS::TISRW ISR;
	uart.UartIrqHandler();
}

