CC        = clang
MAKE      = make
RM        = rm
FORMATTER = clang-format
CFLAGS    = -Wall -I.
FFLAGS    = -i
LFLAGS    = -lcurl -lcjson -fpic
SRCS      = $(wildcard *.c) $(wildcard *.h)
DEPS   	  = spacetraders.o spacetraders-internal.o schemas.o schema-functions.o
LIB       = libspacetraders.so
TESTDIR   = tests

.PHONY: tests clean debug all prof format

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

prof: clean debug
	valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
		 $(TESTDIR)/test

format: 
	$(FORMATTER) $(FFLAGS) $(SRCS)
	$(MAKE) -C $(TESTDIR) "FFLAGS=$(FFLAGS)" format
	
