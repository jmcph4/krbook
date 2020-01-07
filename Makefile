SRC_DIR = src
BIN_DIR = bin

CC = gcc
CFLAGS = -pedantic -ansi

$(BIN_DIR)/1_3: $(SRC_DIR)/1_3.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_4: $(SRC_DIR)/1_4.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_5: $(SRC_DIR)/1_5.c
	$(CC) $^ $(CFLAGS) -o $@

.PHONY: all
all: $(BIN_DIR)/1_3 $(BIN_DIR)/1_4 $(BIN_DIR)/1_5

.PHONY: clean
clean:
	rm $(BIN_DIR)/* -rf
