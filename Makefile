CC := clang
TARGET_FILE := main.c
OUTPUT_FILE := main.out

all:
	make build
	make test

build:
	$(CC) $(TARGET_FILE) -o $(OUTPUT_FILE)

test: $(OUTPUT_FILE)
	./main.out