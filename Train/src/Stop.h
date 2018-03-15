/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_
#include <iostream>

using namespace std;



class Stop {
	string name;
	int distanceToNext;
public:
	Stop(string n, int distance);

	int getDistanceToNext() const {
		return distanceToNext;
	}

	const string& getName() const {
		return name;
	}
};

#endif /* STOP_H_ */
