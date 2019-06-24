
SRC:=binary_search/main.c
SRC+=select_sort/main.c
OBJS=$(patsubst %.c, %.o, $(SRC))

CROSS:=
CC:=$(CROSS)gcc
CFLAGS:=-g

TGTS:=binary_search
TGTS+=select_sort

BIN_DIR:=bin

all: $(TGTS)

$(TGTS): $(OBJS)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $@/main.o

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(patsubst %.o, %.c, $@) -o $@

clean:
	rm -f $(OBJS)
	rm -f bin/*