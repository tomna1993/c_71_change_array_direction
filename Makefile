CC := gcc
#CFLAGS := 
DEST := ./build/

all: change_array_direction.c
	mkdir -p build
	$(CC) change_array_direction.c -o $(DEST)/change_array_direction 

debug: change_array_direction.c
	mkdir -p build
	$(CC) change_array_direction.c -g -o $(DEST)/change_array_direction 