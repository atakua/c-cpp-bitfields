# Change CC from gcc to clang etc. and see the difference in output of runme
all:
	$(CC) main.c c-part.c cpp-part.cpp -o runme


