//*****************************************************************************
//*****************************************************************************
//  FILENAME: Timer16_1.h
//   Version: 1.1, Updated on 2015/3/4 at 22:18:32
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: Timer16 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef Timer16_1_INCLUDE
#define Timer16_1_INCLUDE

#include <m8c.h>

#pragma fastcall16 Timer16_1_EnableInt                       
#pragma fastcall16 Timer16_1_DisableInt                      
#pragma fastcall16 Timer16_1_Start                           
#pragma fastcall16 Timer16_1_Stop                            
#pragma fastcall16 Timer16_1_SetMode                     
#pragma fastcall16 Timer16_1_SetPeriod                     


//-------------------------------------------------
// Prototypes of the Timer16_1 API.
//-------------------------------------------------

extern void Timer16_1_EnableInt(void);
extern void Timer16_1_DisableInt(void);
extern void Timer16_1_Start(void);
extern void Timer16_1_Stop(void);
extern void Timer16_1_SetMode(BYTE bMode);
extern void Timer16_1_SetPeriod(WORD wPeriod);

//--------------------------------------------------
// Constants for Timer16_1 API's.
//--------------------------------------------------

#define Timer16_1_INT_MASK                     ( 0x08 )
#define Timer16_1_INT_CLR_MASK                 ( 0x8 )


//--------------------------------------------------
// @INSTANCE_NAME Default Parameters set in the Device Editor
//--------------------------------------------------

#define Timer16_1_PERIOD                       ( 0x1 )
#define Timer16_1_MODE                         ( 0x0 )
#define Timer16_1_CLOCK_SELECT                 ( 0x0 )

//-------------------------------------------------
// Register Addresses for Timer16_1
//-------------------------------------------------

#pragma ioport  Timer16_1_CONFIG_REG:   0x0b0              // Control register
BYTE            Timer16_1_CONFIG_REG;
#pragma ioport  Timer16_1_DATA_0_REG:   0x0b2              // Input register
BYTE            Timer16_1_DATA_0_REG;
#pragma ioport  Timer16_1_DATA_1_REG:   0x0b1              // Function register
BYTE            Timer16_1_DATA_1_REG;
#pragma ioport  Timer16_1_INT_CLR_REG:   0xda              //Interrupt Clear Register
BYTE            Timer16_1_INT_CLR_REG;
#pragma ioport  Timer16_1_INT_REG:       0x0e0             //Interrupt Mask Register
BYTE            Timer16_1_INT_REG;


#endif
// end of file Timer16_1.h
