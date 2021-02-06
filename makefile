CC=gcc
CFLAGS=-I.
DEPS = hdboiler.h
OBJ = boilerplate.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

plt.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
