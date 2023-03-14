SRC_DIR := src
OBJ_DIR := obj

GCC_DIR ?= gcc

# Compiler binary
CC      := $(GCC_DIR)/bin/arm-none-eabi-gcc

# Compiler options
CFLAGS  := -c -O2

# Source files
SOURCES := $(sort $(wildcard $(SRC_DIR)/*.c))

# Object files
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))

# By default, compile all object files
build: $(OBJECTS)

# Clean target removes all target directories
clean:
	rm -rf $(OBJ_DIR)

# Create directory for object files
$(OBJ_DIR):
	mkdir -p $@

# Define recipe for compiler command
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo Compiling $(notdir $<)
	$(CC) $(CFLAGS) $< -o $@
	@echo PASS
	@echo

.PHONY: build clean
