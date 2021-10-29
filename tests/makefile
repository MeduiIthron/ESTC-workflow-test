include ../path.mk

CC = gcc
TARGET = main
TARGET_PATH = $(OUTPUT_DIR)/$(TARGET).o
BINARY_PATH = $(BINARY_DIR)/$(TARGET)
SOURCES = main.c

LIBRARIES = libvector
LIBRARIES_PATH = $(foreach library, $(LIBRARIES), $(LIBRARIES_DIR)/$(library).o)

all: $(TARGET)

$(TARGET): $(TARGET_PATH)
	$(CC) $(TARGET_PATH) $(LIBRARIES_PATH)  -o $(BINARY_PATH)

$(TARGET_PATH): $(SOURCES)
	$(CC) -c $(SOURCES) -o $(TARGET_PATH)

clean:
	rm -f $(BINARY_PATH)