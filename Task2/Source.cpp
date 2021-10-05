// Hubert Bukowski | x00161897

#include <iostream>
#include <random>
#include <ctime>
#include <string>

int main() {
	std::string PIN = "59245"; 
	int integers[10];
	int randomInt[10];

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
				for (int numberNum = 0; numberNum < 10; numberNum++) {
					std::cout << integers[numberNum];
				}
		}
		else {
			std::cout << std::endl << "NUM: ";
			for (int numberNum = 0; numberNum < 10; numberNum++) {
				std::cout << randomInt[numberNum];
			}
		}
	}

	std::cout << std::endl << "Enter PIN in encrypted format (59245)";
	std::string encryptedPin;
	std::cin >> encryptedPin;

	std::string decryptedPin;
	// Algorithm to read pin from keyboard and compare with randomised values
	for (int currentNum = 0; currentNum < 10; currentNum++) {
		
	}
}