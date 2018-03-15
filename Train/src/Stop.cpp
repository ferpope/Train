/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"
Stop::Stop(string n, int distance, int platform) {
	name = n;
	distanceToNext = distance;
	for(int i=0; i<platform;i++){
		s.notify();
	}
}

