CC = gcc
CFLAGS = -Wall -I.. -I. -g
RM     = rm
LFLAGS = -L.. -lspacetraders -lcjson -lcurl -Wl,-rpath=/home/meridiandawn/projects/spacetraders/
EXEC   = $(basename $(wildcard *.c))
all: $(EXEC)

$(EXEC): test%: test%.o
	$(CC) $(CFLAGS) $(LFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(EXEC) $(addsuffix .o,$(EXEC))