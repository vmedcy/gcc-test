SRC_DIR := src
OBJ_DIR := obj

GCC_DIR ?= gcc

# Compiler binary
CC      := $(GCC_DIR)/bin/arm-none-eabi-gcc

# Compiler options
CFLAGS  := -c -O2

# Source files
SRC_C   := $(sort $(wildcard $(SRC_DIR)/*.c))
SRC_CPP := $(sort $(wildcard $(SRC_DIR)/*.cpp))

# Object files
OBJ_C   := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_C))
OBJ_CPP := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_CPP))

# By default, compile object files for all C and C++ sources
build: $(OBJ_C) $(OBJ_CPP)

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

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo Compiling $(notdir $<)
	$(CC) $(CFLAGS) $< -o $@
	@echo PASS
	@echo

.PHONY: build clean
