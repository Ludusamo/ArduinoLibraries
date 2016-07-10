#ifndef TIMER_H
#define TIMER_H

#include "Arduino.h"

class Timer {
public:
	Timer();
	void setLimit(unsigned long timeLimit);
	void reset();
	unsigned long curElapsedTime();
	bool isDone();
private:
	unsigned long prevTime;
	unsigned long timeLimit;
};

#endif // TIMER_H
