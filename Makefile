# Makefile for building exercises (executables)

CC := clang
CFLAGS := -Wall -Wextra -g -fsanitize=address
ASAN_OPTIONS := detect_leaks=1
# List of chapters
CHAPTERS := $(wildcard chapter*)

# Output directory
OUTPUT_DIR := output

# Rule to build all chapters
all: $(OUTPUT_DIR) $(foreach chapter, $(CHAPTERS), $(OUTPUT_DIR)/$(chapter)_exercises)

# Create the output directory if it doesn't exist
$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

# Rule to build each chapter's executable
$(OUTPUT_DIR)/%_exercises: %/exercises.c | $(OUTPUT_DIR)
	$(CC) $(CFLAGS)  -o $@ $< ;$(ASAN_OPTIONS)

# Clean rule to remove all executables
clean:
	rm -rf $(OUTPUT_DIR)

.PHONY: all clean
