SRC:= $(wildcard *.c)

OBJ:= $(patsubst *.c, *.o, $(SRC))

b.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
