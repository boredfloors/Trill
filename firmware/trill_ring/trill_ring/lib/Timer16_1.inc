;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: Timer16_1.inc
;;   Version: 1.1, Updated on 2015/3/4 at 22:18:32
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION: Assembler declarations for the Timer16 user module interface
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"


;--------------------------------------------------
; Constants for Timer16_1 API's.
;--------------------------------------------------

Timer16_1_INT_REG:                         equ 0x0e0
Timer16_1_INT_MASK:                        equ 0x08
Timer16_1_INT_CLR_REG:                     equ 0xda
Timer16_1_INT_CLR_MASK:                    equ 0x8


;--------------------------------------------------
; @INSTANCE_NAME Default Parameters set in the Device Editor
;--------------------------------------------------

Timer16_1_PERIOD:                          equ 0x1
Timer16_1_MODE:                            equ 0x0
Timer16_1_CLOCK_SELECT:                    equ 0x0


;--------------------------------------------------
; Register Address Constants for Timer16_1
;--------------------------------------------------

Timer16_1_CONFIG_REG:                  equ 0xb0   ; Control register
Timer16_1_DATA1_REG:                   equ 0xb1   ; Function register
Timer16_1_DATA0_REG:                   equ 0xb2   ; Input register


; end of file Timer16_1.inc