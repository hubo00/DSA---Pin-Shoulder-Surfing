// Hubert Bukowski | x00161897

#include <iostream>
#include <random>
#include <ctime>
#include <string>

int main() {
	std::string pin = "95274"; 
	const int PINLENGTH = 5;
	const int NUMBERAMT = 10;
	int integers[NUMBERAMT];
	int randomInt[NUMBERAMT];

	std::default_random_engine defEngine(time(0));
	std::uniform_int_distribution<int> intDistro(1, 3);

	// Loop to assign integers to 1-10 and random array
	for (int i = 0; i <= 9; i++) {
		int number = i;
		int randNum = intDistro(defEngine);
		integers[i] = number;
		randomInt[i] = randNum;
	}

	// Loop to print out integers and random values corresponding to the integers
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			std::cout << "PIN: ";
			for (int numberNum = 0; numberNum < NUMBERAMT; numberNum++) {
				std::cout << integers[numberNum];
			}
		}
		else {
			std::cout << std::endl << "NUM: ";
			for (int numberNum = 0; numberNum < NUMBERAMT; numberNum++) {
				std::cout << randomInt[numberNum];
			}
		}
	}

	// Input encrypted pin number
	std::cout << std::endl << "Enter PIN in encrypted format (95274) ";
	std::string pinIn;
	std::cin >> pinIn;

	// Initialising necessary variables for pin comparison
	std::string encryptedPin;
	char pinValue;
	char numValue;
	int rand;
	// Algorithm to read encrypted pin from keyboard and compare with pin stored in memory
	for (int pinNum = 0; pinNum < PINLENGTH; pinNum++) {
		pinValue = pin[pinNum];
		for (int numberNum = 0; numberNum < NUMBERAMT; numberNum++) {
			numValue = '0' + integers[numberNum];
			if(pinValue == numValue){
				rand = randomInt[numberNum];
				encryptedPin += std::to_string(rand);
			}
		}
	}
	if (encryptedPin == pinIn) {
		std::cout << "Password Match, You're in" << std::endl;
	}
	else {
		std::cout << "Password Mismatch, You're locked out" << std::endl;
	}
}