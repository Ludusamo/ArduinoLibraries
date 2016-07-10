#include "timer.h"

Timer::Timer() {
	prevTime = millis();
}

void Timer::setLimit(unsigned long  timeLimit) {
	this->timeLimit = timeLimit;
}

void Timer::reset() {
	prevTime = millis();
}

unsigned long Timer::curElapsedTime() {
	return millis() - prevTime;
}

bool Timer::isDone() {
	return curElapsedTime() > timeLimit;
}
