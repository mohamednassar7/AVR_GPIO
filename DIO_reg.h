/**********************************************************************/
/*  File Name: DIO_reg                                                */
/*  Author   : Mohamed Nassar                                         */
/*  Date     : 26-Mar-2020                                            */
/*  Description : Regesters concerns with AVR DIO interfacing         */
/**********************************************************************/
/*portc*/
#define PORTC_REG        *((volatile u8*)0X35)
#define DDRC_REG         *((volatile u8*)0X34)
#define PINC_REG         *((volatile u8*)0X33)
/*portd*/
#define PORTD_REG        *((volatile u8*)0X32)
#define DDRD_REG         *((volatile u8*)0X31)
#define PIND_REG         *((volatile u8*)0X30)
/*portb*/
#define PORTB_REG        *((volatile u8*)0X38)
#define DDRB_REG         *((volatile u8*)0X37)
#define PINB_REG         *((volatile u8*)0X36)
/*porta*/
#define PORTA_REG        *((volatile u8*)0X3B)
#define DDRA_REG         *((volatile u8*)0X3A)
#define PINA_REG         *((volatile u8*)0X39)
