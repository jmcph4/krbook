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

$(BIN_DIR)/1_7: $(SRC_DIR)/1_7.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_8: $(SRC_DIR)/1_8.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_9: $(SRC_DIR)/1_9.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_10: $(SRC_DIR)/1_10.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_12: $(SRC_DIR)/1_12.c
	$(CC) $^ $(CFLAGS) -o $@

.PHONY: all
all: $(BIN_DIR)/1_3 $(BIN_DIR)/1_4 $(BIN_DIR)/1_5 $(BIN_DIR)/1_7 $(BIN_DIR)/1_8 $(BIN_DIR)/1_9 $(BIN_DIR)/1_10 $(BIN_DIR)/1_12

.PHONY: clean
clean:
	rm $(BIN_DIR)/* -rf
