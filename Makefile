main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

main.o: main.cpp caesar.h vigenere.h decrypt.h
	g++ -c main.cpp
caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h caesar.h
	g++ -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h caesar.h
	g++ -c decrypt.cpp

tests.o: tests.cpp doctest.h funcs.h

test-ascii.o: test-ascii.cpp

clean:
	rm *.o main tests test-ascii
