/**********************************************************************/
/*  File Name: DIO_int                                                */
/*  Author   : Mohamed Nassar                                         */
/*  Date     : 26-Mar-2020                                            */
/*  Description :  AVR DIO interfacing                                */
/**********************************************************************/

#define PORTA 1
#define PORTB 2
#define PORTC 3
#define PORTD 4

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


#define OUTPUT 1
#define INPUT  0

#define HIGH 1
#define LOW  0


ErrorStatus DIO_enumSetPinDirection( u8 copy_u8PortID , u8 copy_u8PinID , u8 copy_u8Direction);
ErrorStatus DIO_enumSetPinValue(u8 copy_u8PortID , u8 copy_u8PinID,u8 copy_u8Value);
u8          DIO_u8GetPin(u8 copy_u8PortID,u8 copy_u8PinID);
ErrorStatus DIO_enumSetPortDirection(u8 copy_u8PortID,u8 copy_u8Direction);
ErrorStatus DIO_enumSetPortDirection(u8 copy_u8PortID,u8 copy_u8Value);




