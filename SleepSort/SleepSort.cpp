#include "SleepSort.h"
#include <iostream>
#include <thread>

std::vector<int> SleepSort::sort(std::vector<int>& const list)
{
	std::vector<std::thread> threads;

	for (int i = 0; i < list.size(); i++) {
		threads.push_back(std::thread(&SleepSort::asyncSleep, this, list.at(i)));
	}

	for (int i = 0; i < threads.size(); i++) {
		threads.at(i).join();
	}

	return sortedList;
}

void SleepSort::asyncSleep(int value)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(value*10));

	std::lock_guard<std::mutex> threadLock(this->listMutex);
	sortedList.push_back(value);
}
