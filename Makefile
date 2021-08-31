CC := clang++
TARGET_FILE := main.c
INCLUDE_DIR := ./include
OUTPUT_FILE := ./test.out

all:
  make build
  make test

build:
  $(CC) $(TARGET_FILE) -I$(INCLUDE_DIR) -o $(OUTPUT_FILE)

test:
  ./test.out
