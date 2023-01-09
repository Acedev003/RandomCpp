all: printable_ascii atbash pi_calc

printable_ascii: src/printable_ascii/printable_ascii.cpp bin
	g++ src/printable_ascii/printable_ascii.cpp -o bin/printable_ascii

atbash: src/atbash/atbash.cpp bin
	g++ src/atbash/atbash.cpp -o bin/atbash

pi_calc: src/pi_calc/pi_calc.cpp bin
	g++ src/pi_calc/pi_calc.cpp -o bin/pi_calc

bin:
	mkdir -p bin

clean:
	rm -r ./bin/*