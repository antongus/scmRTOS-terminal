/**
*  @file terminal.cpp
*
*  Terminal processes and some terminal commands implementation.
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#include "hw.h"
#include "processes.h"
#include "commands.h"

TTerminalProcess terminalProcess;

namespace OS
{
	template <>
	OS_PROCESS void TTerminalProcess::exec()
	{
		char buf[61];

		while (uart.Keypressed())
			uart.GetChar();

		for (;;)
		{
			uart << "=>";
			uart.Gets(buf, 60);
			if (*buf)
			{
				if (!Interpreter::parse(buf, uart))
					uart << "ERR";
				uart << "\r\n";
			}
		}
	}
}

/**
 * ECHO command.
 * Echoes input to output.
 */
INTERPRETER_COMMAND(ECHO)
{
	stream << args;
	return true;
}
