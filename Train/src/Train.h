/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_
#include "Line.h"
#include <thread>
#include <chrono>

class Train {
	int speed;
	int currentStop;
	unsigned int distance=0;
	Line* line;
	int id;
	static unsigned int count;
public:
	Train(int speed, Line* line);
	void go();
	void stop();
	int getCurrentStop() const {
		return currentStop;
	}
	void goToEnd();
};

#endif /* TRAIN_H_ */
