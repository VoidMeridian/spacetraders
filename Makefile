CC       = gcc
MAKE     = make
RM       = rm
CFLAGS   = -Wall -I.
LFLAGS   = -lcurl -lcjson -fpic
DEPS   	 = spacetraders.o spacetraders-internal.o
LIB      = libspacetraders.so
TESTDIR  = tests

.PHONY: tests debug

all: $(LIB)
debug: CFLAGS += -g -DDEBUG
debug: tests

$(LIB): $(DEPS)
	$(CC) -shared -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(LFLAGS) -c -o $@ $<

clean: 
	$(RM) $(DEPS) $(LIB)
	$(MAKE) -C $(TESTDIR) clean

tests: $(LIB)
	$(MAKE) -C $(TESTDIR)

prof: debug
	valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
		 $(TESTDIR)/test
