/**
*  @file hw.h
*
*  Project-wide hardware definitions.
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#ifndef HW_H_INCLUDED
#define HW_H_INCLUDED

#include "stm32.h"

/**
 * Processes declarations
 */
#include "processes.h"

/**
 * Board pins
 */
#include "pin.h"
using GreenLed = Pin<'C', 9, 'H'>;
using BoardButton = Pin<'A', 0, 'H'>;


/**
 * UARTs
 */
#include "stm32_uart.h"

/**
 * Console UART
 */
struct UplinkUartTTLProps
{
	static const STM32::UART::UartNum uartNum = STM32::UART::UART_1;
	static const STM32::UART::Remap remap = STM32::UART::REMAP_NONE;
	enum
	{
		BAUDRATE = 115200,
		RX_BUF_SIZE = 128,
		TX_BUF_SIZE = 128,
		UART_INTERRUPT_PRIOGROUP = 2,
		UART_INTERRUPT_SUBPRIO = 2,
	};
	typedef STM32::UART::DummyDE PinDE;
};

using ConsoleUart = STM32::UART::Uart<UplinkUartTTLProps>;
extern ConsoleUart uart;

#endif // HW_H_INCLUDED
