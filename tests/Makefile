CC 		  = clang
CFLAGS 	  = -Wall -I.. -I. -g
RM     	  = rm
FORMATTER = clang-format
FFLAGS    = -i
LFLAGS 	  = -L.. -lspacetraders -lcjson -lcurl -Wl,-rpath=/home/meridiandawn/projects/spacetraders/
SRCS      = $(wildcard *.c) $(wildcard *.h)
EXEC      = $(basename $(wildcard *.c))

.PHONY: all clean format
all: $(EXEC)

$(EXEC): test%: test%.o
	$(CC) $(CFLAGS) $(LFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(EXEC) $(addsuffix .o,$(EXEC))
format:
	$(FORMATTER) $(FFLAGS) $(SRCS)