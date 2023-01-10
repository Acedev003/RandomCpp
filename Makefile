all: printable_ascii atbash pi_calc rot13

printable_ascii: src/printable_ascii/printable_ascii.cpp bin
	g++ src/printable_ascii/printable_ascii.cpp -o bin/printable_ascii

atbash: src/atbash/atbash.cpp bin
	g++ src/atbash/atbash.cpp -o bin/atbash

pi_calc: src/pi_calc/pi_calc.cpp bin
	g++ src/pi_calc/pi_calc.cpp -o bin/pi_calc

rot13: src/rot13/rot13.cpp bin
	g++ src/rot13/rot13.cpp -o bin/rot13

bin:
	mkdir -p bin

clean:
	rm -r ./bin/*