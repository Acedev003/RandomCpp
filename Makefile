
all: printable_ascii

printable_ascii: src/printable_ascii.cpp
	mkdir -p bin
	g++ src/printable_ascii.cpp -o bin/printable_ascii

clean:
	rm -r ./bin/*