#include <iostream>
#include "SleepSort.h"
#include "RandomNumberGeneratorUtil.h"
#include <vector>

int main()
{
    SleepSort sleepSort;

    std::vector<int> randomNumbers = RandomNumberGeneratorUtil::generateRandomNumbersOnVectorList(1000, 0, 1000);

    auto sortedList = sleepSort.sort(randomNumbers);

    for (int i = 0; i < sortedList.size(); i++) {
        std::cout << sortedList.at(i) << std::endl;
    }
}
