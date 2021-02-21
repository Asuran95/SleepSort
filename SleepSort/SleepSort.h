#ifndef SLEEPSORT_H
#define SLEEPSORT_H

#include <vector>
#include <mutex>

class SleepSort
{
public:
	std::vector<int> sort(std::vector<int> &const list );

private:

	std::mutex listMutex;
	std::vector<int> sortedList;
	void asyncSleep(int value);
};

#endif