/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */
#include <vector>
#include <iostream>
using namespace std;
#include "Stop.h"
#ifndef LINE_H_
#define LINE_H_

class Line {
	vector <Stop> stops;
public:
	void addStop (Stop s);
	Stop getStop (int i);
	Stop* findStop (string name);
	int size(void);
	Line();

};

#endif /* LINE_H_ */
