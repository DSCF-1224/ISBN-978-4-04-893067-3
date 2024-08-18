PROGRAM := main

OBJS := PreviousValue.o Range.o Stack.o

CC := gcc-14

CFLAGS := -g -fanalyzer -Wall -Werror -Wextra

$(PROGRAM): $(PROGRAM).o $(OBJS)
	$(CC) $(PROGRAM).o $(OBJS) -o $(PROGRAM).exe

%.o: %.c
	$(CC) $< -o $@ $(CFLAGS) -c

clean:
	rm *.o $(PROGRAM)

