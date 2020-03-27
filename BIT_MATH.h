/**********************************************************************/
/*  File Name: BIT_MATH.h                                             */
/*  Author   : Mohamed Nassar                                         */
/*  Date     : 10-Mar-2020                                            */
/*  Description :  Macros for Controlling each bit in a Register      */
/**********************************************************************/

#ifndef _BIT_MATH_H
#define _BIT_MATH_H
#define SET_BIT(reg,index)                                reg |=(1<<index)
#define SET_2BIT(reg,index1,index2)                       reg |=(1<<index1) | (1<<index2)
#define SET_3BIT(reg,index1,index2,index3)                reg |=(1<<index1) | (1<<index2) | (1<<index3)
#define SET_4BIT(reg,index1,index2,index3,index4)         reg |=(1<<index1) | (1<<index2) | (1<<index3) | (1<<index4)
#define SET_5BIT(reg,index1,index2,index3,index4,index5)  reg |=(1<<index1) | (1<<index2) | (1<<index3) |(1<<index4) | (1<<index5)
#define CLR_BIT(reg,index)                                reg &=(~ (1<<index) )
#define CLR_2BIT(reg,index1,index2)                       reg &=(~ ( (1<<index1) | (1<<index2) ) )
#define CLR_3BIT(reg,index1,index2,index3)                reg &=(~ ( (1<<index1) | (1<<index2) | (1<<index3) ) )
#define CLR_4BIT(reg,index1,index2,index3,index4)         reg &=(~ ( (1<<index1) | (1<<index2) | (1<<index3) | (1<<index4) ) )
#define CLR_5BIT(reg,index1,index2,index3,index4,index5)  reg &=(~ ( (1<<index1) | (1<<index2) | (1<<index3) | (1<<index4) | (1<<index5) ) )
#define GET_BIT(reg,index)                              ((reg>>index) & 0x01)
#define TGE_BIT(reg,index)                             reg^=(1<<index)
#endif
