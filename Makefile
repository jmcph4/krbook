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

$(BIN_DIR)/1_13: $(SRC_DIR)/1_13.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_14: $(SRC_DIR)/1_14.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_15: $(SRC_DIR)/1_15.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_16: $(SRC_DIR)/1_16.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_17: $(SRC_DIR)/1_17.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_18: $(SRC_DIR)/1_18.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_19: $(SRC_DIR)/1_19.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_20: $(SRC_DIR)/1_20.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_21: $(SRC_DIR)/1_21.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_22: $(SRC_DIR)/1_22.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_23: $(SRC_DIR)/1_23.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/1_24: $(SRC_DIR)/1_24.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/2_1: $(SRC_DIR)/2_1.c
	$(CC) $^ $(CFLAGS) -o $@

$(BIN_DIR)/2_4: $(SRC_DIR)/2_4.c
	$(CC) $^ $(CFLAGS) -lm -o $@

.PHONY: all
all: $(BIN_DIR)/1_3 $(BIN_DIR)/1_4 $(BIN_DIR)/1_5 $(BIN_DIR)/1_7 $(BIN_DIR)/1_8 $(BIN_DIR)/1_9 $(BIN_DIR)/1_10 $(BIN_DIR)/1_12 $(BIN_DIR)/1_13 $(BIN_DIR)/1_14 $(BIN_DIR)/1_15 $(BIN_DIR)/1_16 $(BIN_DIR)/1_17 $(BIN_DIR)/1_18 $(BIN_DIR)/1_19 $(BIN_DIR)/1_20 $(BIN_DIR)/1_21 $(BIN_DIR)/1_22 $(BIN_DIR)/1_23 $(BIN_DIR)/1_24 $(BIN_DIR)/2_1 $(BIN_DIR)/2_4

.PHONY: clean
clean:
	rm $(BIN_DIR)/* -rf
