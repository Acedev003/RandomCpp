all: printable_ascii atbash

printable_ascii: src/printable_ascii/printable_ascii.cpp bin
	g++ src/printable_ascii/printable_ascii.cpp -o bin/printable_ascii

atbash: src/atbash/atbash.cpp bin
	g++ src/atbash/atbash.cpp -o bin/atbash

bin:
	mkdir -p bin

clean:
	rm -r ./bin/*