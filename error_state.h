  
/**********************************************************************/
/*  File Name: error_state.h                                          */
/*  Author   : Mohamed Nassar                                         */
/*  Date     : 10-Mar-2020                                            */
/*  Description :  Enum for Detecting Errors in Functions             */
/**********************************************************************/

#ifndef ERROR_STATE_H
#define ERROR_STATE_H
typedef enum Error
{
ES_OK,
ES_NOT_OK,
ES_OUT_OF_RANGE,
ES_NULL_POINTER,
}ErrorStatus; 
#endif
