include ../path.mk

CC = gcc
TARGET = libvector
TARGET_PATH = $(LIBRARIES_DIR)/$(TARGET).o
SOURCES = vector3.c

all: $(TARGET)

$(TARGET): $(TARGET_PATH)
$(TARGET_PATH): $(SOURCES)
	$(CC) -c $(SOURCES) -o $(TARGET_PATH)

clean:
	rm -f $(TARGET_PATH)