enum BitType {
  64_BIT,
  32_BIT
};

BitType getBitType() {
  BitType bit_type;
  
  if (sizeof(size_t) == 8)
  {
    bit_type = 64_BIT;
  } else if (sizeof(size_t) == 4) {
    bit_type = 32_BIT;
  }

  return bit_type;
};
