#include "RandomNumberGeneratorUtil.h"
#include <iostream>
#include <random>

std::vector<int> RandomNumberGeneratorUtil::generateRandomNumbersOnVectorList(int maxSize, int min, int max)
{
	std::uniform_int_distribution<> random(min, max);
	std::random_device rd;
	std::mt19937 gen(rd());

	std::vector<int> randomNumbers;

	for (int i = 0; i < maxSize; i++) {
		int randomNumber = random(gen);

		randomNumbers.push_back(randomNumber);
	}

	return randomNumbers;
}
