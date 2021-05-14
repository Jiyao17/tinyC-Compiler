
TARGET=cc


GREEN="\033[0;32m"
NC="\033[0m" # No Color

$(TARGET):
	make -C ./compiler
	cp ./compiler/compiler ./cc
	@echo ${GREEN}"make succeeded!"${NC}

.PHONY:
clean:
	make -C ./compiler clean
	rm -r $(TARGET) *.s *.exe