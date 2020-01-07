SRC_DIR = src
BIN_DIR = bin

CC = gcc
CFLAGS = -pedantic -ansi

$(BIN_DIR)/1_3:
	$(CC) $(SRC_DIR)/*.c $(CFLAGS) -o $@

.PHONY: clean
clean:
	rm $(BIN_DIR)/* -rf
