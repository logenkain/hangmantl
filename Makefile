CC=clang

FRAMEWORKS:=
LIBRARIES:= -lncurses

SOURCE=main.c

CFLAGS=-Wall -Werror -g -v $(SOURCE)
LDFLAGS=$(LIBRARIES) $(FRAMEWORKS)
OUT=-o main

all:
	$(CC) $(CFLAGS) $(LDFLAGS) $(OUT)
