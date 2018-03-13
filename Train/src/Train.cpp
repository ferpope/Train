/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

Train::Train(int speed, Line line) : speed(speed), line(line) {}

void Train::go(){
	int distance;
	int time;
	for(short i=currentStop;i<line.getStops().size();i++){
		line.getStops()[i];
		distance = 0;
		time = 0;
		while(line.distanceToNext>distance){
			time++;
			distance = speed*time;
		}
		cout<<"Estás en la línea "<< line.getStops()[i].name<<endl;
	}
}

void Train::stop(){
	cout<<"Final de trayecto \n";
}
