/**********************************************************************/
/*  File Name: DIO_prog                                                */
/*  Author   : Mohamed Nassar                                         */
/*  Date     : 26-Mar-2020                                            */
/*  Description :  AVR DIO interfacing                                */
/**********************************************************************/
#include "STD_types"
#include "BIT_MATH.h"
#include "error_state.h"



#include "DIO_reg.h"
#include "DIO_int.h"


ErrorStatus        DIO_enumSetPinDirection(u8 copy_u8PortID,u8 copy_u8PinID,u8 copy_u8Direction)
     {
       ErrorStatus Error =ES_NOT_OK;
       if((copy_u8PortID<5)&&(copy_u8PinID<8))
       {
          Error =ES_OK;
          if(copy_u8Direction==OUTPUT)
            {
              switch(copy_u8PortID)
              {
                case PORTA : SET_BIT(DDRA_REG,copy_u8PinID); break;
                case PORTB : SET_BIT(DDRB_REG,copy_u8PinID); break;
                case PORTC : SET_BIT(DDRC_REG,copy_u8PinID); break;
                case PORTD : SET_BIT(DDRD_REG,copy_u8PinID); break;

              }
            }
        else if(copy_u8Direction==INPUT)
        {
          switch(copy_u8PortID)
          {
            case PORTA : CLR_BIT(DDRA_REG,copy_u8PinID); break;
            case PORTB : CLR_BIT(DDRB_REG,copy_u8PinID); break;
            case PORTC : CLR_BIT(DDRC_REG,copy_u8PinID); break;
            case PORTD : CLR_BIT(DDRD_REG,copy_u8PinID); break;
          }
        }
        else
        {
          Error =ES_NOT_OK;
        }
       }
       else
       {
         Error =ES_NOT_OK;
       }
     }
ErrorStatus        DIO_enumSetPinValue(u8 copy_u8PortID,u8 copy_u8PinID,u8 copy_u8Value)
      {
        ErrorStatus Error =ES_NOT_OK;
        if((copy_u8PortID<5)&&(copy_u8PinID<8))
        {
           Error =ES_OK;
           if(copy_u8Value==HIGH)
             {
               switch(copy_u8PortID)
               {
                 case PORTA : SET_BIT(DDRA_REG,copy_u8PinID); break;
                 case PORTB : SET_BIT(DDRB_REG,copy_u8PinID); break;
                 case PORTC : SET_BIT(DDRC_REG,copy_u8PinID); break;
                 case PORTD : SET_BIT(DDRD_REG,copy_u8PinID); break;

               }
             }
         else if(copy_u8Value==LOW)
         {
           switch(copy_u8PortID)
           {
             case PORTA : CLR_BIT(DDRA_REG,copy_u8PinID); break;
             case PORTB : CLR_BIT(DDRB_REG,copy_u8PinID); break;
             case PORTC : CLR_BIT(DDRC_REG,copy_u8PinID); break;
             case PORTD : CLR_BIT(DDRD_REG,copy_u8PinID); break;
           }
         }
         else
         {
           Error =ES_NOT_OK;
         }
        }
        else
        {
          Error =ES_NOT_OK;
        }
}
u8                 DIO_u8GetPin(u8 copy_u8PortID,u8 copy_u8PinID)
        {
            if((copy_u8PortID<5)&&(copy_u8PinID<8))
            {
              switch(copy_u8PortID)
              {
                case PORTA : return GET_BIT(PINA_REG,copy_u8PinID); break;
                case PORTB : return GET_BIT(PINB_REG,copy_u8PinID); break;
                case PORTC : return GET_BIT(PINC_REG,copy_u8PinID); break;
                case PORTD : return GET_BIT(PIND_REG,copy_u8PinID); break;
              }
              return 5;
            }
        }
ErrorStatus        DIO_enumSetPortDirection(u8 copy_u8PortID,u8 copy_u8Direction)
        {
          ErrorStatus Error =ES_NOT_OK;
          if((copy_u8PortID<5))
          {
             Error =ES_OK;
             switch(copy_u8PortID)
             {
               case PORTA : DDRA_REG=copy_u8Direction break;
               case PORTB : DDRB_REG=copy_u8Direction break;
               case PORTC : DDRC_REG=copy_u8Direction break;
               case PORTD : DDRD_REG=copy_u8Direction break;
             }
        }
        else
        {
          Error =ES_NOT_OK;
        }
      }
ErrorStatus        DIO_enumSetPortDirection(u8 copy_u8PortID,u8 copy_u8Value)
{
  ErrorStatus Error =ES_NOT_OK;
  if((copy_u8PortID<5))
  {
     Error =ES_OK;
     switch(copy_u8PortID)
     {
       case PORTA : PORTA_REG=copy_u8Direction break;
       case PORTB : PORTB_REG=copy_u8Direction break;
       case PORTC : PORTC_REG=copy_u8Direction break;
       case PORTD : PORTD_REG=copy_u8Direction break;
     }
}
else
{
  Error =ES_NOT_OK;
}
}
