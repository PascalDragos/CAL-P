#include "hal_lf.h"
#include "mcal_gpio.h"

void hal_vSetLineFollower(T_U8 direction)
{
    int pin;
    for (pin = 0; pin < 6; ++pin)
    {
        GPIO_u8SetPortPin(PORT_C, pin , DIGITAL, direction);
    }
    
   
}

void hal_vWriteLineFollower(BOOL value)
{
    T_U16 port_value;
    port_value = GPIO_u16ReadPort(PORT_C);
    if(value)
    {
        port_value |= 0x3F;
    }
    else
    {
        port_value &= ~0x3F;
    }
    /* int pin;
    for (pin = 0; pin < 6; ++pin)
    {
        GPIO_u8WritePortPin(PORT_C, pin , value);
    }
    */
    
    
    GPIO_vWritePort(PORT_C , port_value);
    
}

T_U16 hal_vGetLineFollwer(void)
{
    T_U16 port_value;
    hal_vSetLineFollower(0);
    hal_vWriteLineFollower(1);
    __delay_us(10);
    hal_vSetLineFollower(1);
    __delay_ms(1);  
    port_value = GPIO_u16ReadPort(PORT_C) & 0x3F;
    
    return port_value;
}