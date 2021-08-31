#include <stdio.h> 
#include "include/CheckBit.h" 
int main() { 
  BitType bit_type = getBitType();
  
  if (bit_type == BIT_64) { 
    printf("Running on 64 Bit \n"); 
  } else if (bit_type == BIT_32) { 
    printf("Running on 64 Bit \n"); 
  } 
}