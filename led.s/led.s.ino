; Assembly Code: RGB LED ON/OFF via Buttons
;------------------------------------------
#define __SFR_OFFSET 0x00
#include "avr/io.h"
;------------------------
.global start
.global btnLED
;=============================================================================
start:
    SBI   DDRB, 4             ;set PB4 (pin D12 as o/p - red LED)
    SBI   DDRB, 3             ;set PB3 (pin D11 as o/p - green LED)
    SBI   DDRB, 2             ;set PB2 (pin D10 as o/p - blue LED)
    CBI   DDRD, 2             ;clear PD2 (pin D02 as i/p - red button)
    CBI   DDRD, 3             ;clear PD3 (pin D03 as i/p - green button)

