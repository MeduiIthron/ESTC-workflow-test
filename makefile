include ./path.mk

all: libvector tests

prepare:
	mkdir $(OUTPUT_DIR)
	mkdir $(LIBRARIES_DIR)
	mkdir $(BINARY_DIR)

libvector: prepare
	make -C $(PROJECT_DIR)/vector/

tests: prepare libvector
	make -C $(PROJECT_DIR)/tests/

clean:
	rm -r -f $(OUTPUT_DIR)
	rm -r -f $(LIBRARIES_DIR)
	rm -r -f $(BINARY_DIR)