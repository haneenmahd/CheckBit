#include <stdlib.h>

typedef enum { 
  BIT_64, 
  BIT_32 
} BitType;

BitType getBitType() { 
  BitType bit_type; 
  
  if (sizeof(size_t) == 8) { 
    bit_type = BIT_64; 
  } else if (sizeof(size_t) == 4) { 
    bit_type = BIT_32; 
  } 
  
  return bit_type; 
};
