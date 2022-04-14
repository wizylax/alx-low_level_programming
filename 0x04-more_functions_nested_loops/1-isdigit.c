 #include "main.h"
  2 /**
  3  *_isdigit - checks for a digit.
  4  *@c: input.
  5  *
  6  *Return: 1 if c is a digit
  7  *0 otherwise.
  8  */
  9 int _isdigit(int c)
 10 {
 11         if ((c >= '0') && (c <= '9'))
 12         {
 13                 return (1);
 14         }
 15         else
 16         {
 17                 return (0);
 18         }
 19 }

