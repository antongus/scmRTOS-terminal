/**
*  @file scmRTOS_CONFIG.h
*
*  scmRTOS target configuration
*
*  Copyright © 2016 Anton B. Gusev aka AHTOXA
**/

#ifndef  scmRTOS_TARGET_CFG_H
#define  scmRTOS_TARGET_CFG_H

//------------------------------------------------------------------------------
// If the macro value is 0 (the default), the port uses SysTick as a system
// timer. It initializes the timer and starts it. The user must make sure that
// the address of the timer interrupt handler (SysTick_Handler) is in the right
// place at the interrupt vector table.
// If the macro value is 1, then the user has to implement (see docs for details):
//     1. extern "C" void __init_system_timer();
//     2. void LOCK_SYSTEM_TIMER() / void UNLOCK_SYSTEM_TIMER();
//     3. In the interrupt handler of the custom timer, the user needs to call
//        OS::system_timer_isr().
//
#define SCMRTOS_USE_CUSTOM_TIMER 0

//------------------------------------------------------------------------------
// Define SysTick clock frequency and its interrupt rate in Hz.
// It makes sense if USE_CUSTOM_TIMER = 0.
//
#if   defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#	define SYSTICKFREQ     24000000UL
#else
#	define SYSTICKFREQ     72000000UL
#endif
#define SYSTICKINTRATE  1000

//------------------------------------------------------------------------------
// Define number of priority bits implemented in hardware.
//
#define CORE_PRIORITY_BITS  4


#endif // scmRTOS_TARGET_CFG_H

