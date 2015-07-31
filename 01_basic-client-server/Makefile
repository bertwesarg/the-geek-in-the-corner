.PHONY: clean

CC     := gcc
CFLAGS := -Wall -O2 -g
LIBS   := -lrdmacm -libverbs -lpthread

APPS   := server client

all: ${APPS}

%: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $*.c -o $@ $(LIBS)

clean:
	rm -f ${APPS}
