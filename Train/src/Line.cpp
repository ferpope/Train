/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"
#include <vector>
#include <iostream>
using namespace std;
void Line::addStop (Stop* s) {
stops->push_back(s);
}
Stop* Line::getStop (int i){
	return &stops[i];
}
Stop* Line::findStop (string name){
	for (unsigned int i = 0; i< stops.size(); i++)
		if (stops[i]->getName()== name) {
			return &stops[i];
		}
			return NULL;
}

int Line::size(void){
	return stops->size();
}

Line::Line() {
	// TODO Auto-generated constructor stub

}

