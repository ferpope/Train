/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_
#include "Line.h"

class Train {
	int speed;
	int currentStop;
	Line line;
public:
	Train(int speed, Line line);
	void go();
	void stop();
	int getCurrentStop() const {
		return currentStop;
	}
	void goToEnd();
};

#endif /* TRAIN_H_ */
