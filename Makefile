CC := clang 
TARGET := main.c 
OUTPUT := main.out 

all: 
  make build 
  make test 

build: 
  $(CC) $(TARGET) -o $(OUTPUT) 

test: main.out
  ./main.out