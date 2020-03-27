
#ifndef STD_types_H_
#define STD_types_H_

typedef unsigned char        u8;
typedef unsigned short int   u16;
typedef unsigned long int    u32;

typedef signed char          s8;
typedef signed short int     s16;
typedef signed long int      s32;

typedef unsigned char        u_int8;
typedef unsigned short int   u_int16;
typedef unsigned long int    u_int32;

typedef signed char          s_int8;
typedef signed short int     s_int16;
typedef signed long int      s_int32;

typedef float                f32;
typedef double               f64;
typedef long double          f96;
#define NUL                  0
typedef struct node
{
  u32 data;
  struct node * next;
} Node;
#endif
