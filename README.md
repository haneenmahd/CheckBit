# CheckBit
[![Build App ✔️](https://github.com/haneenmahd/CheckBit/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/haneenmahd/CheckBit/actions/workflows/build.yml) <br>
Check ✔️ if your computer is a 64-bit or 32-bit.

# Usage
```c
#include <stdio.h>
#include "CheckBit.h"

int main() 
{
  // Initializing BitType enum
  BitType bit_type = getBitType();
  
  // 64 Bit
  if (bit_type == BIT_64) {
    puts("A 64 Bit Device");
  } else {
  // 32 Bit
    puts("A 32 Bit Device");
  }
  return 0;
}
```

# Examples
See `main.c` in the root directory of the project,
Which provides a good example for you.

# License
This project is licensed under `MIT`.
