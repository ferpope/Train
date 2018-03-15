/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <iomanip>

unsigned int Train::count = 0;

Train::Train(int speed, Line* line) : speed(speed), line(line) {
	count++;
	id = count;
	currentStop=0;
}

void Train::go(){

	distance=0;
	int time=0;
	cout<<"tren"<<id<<setw(id*10)<<line->getStop(currentStop)->getName()<<endl;

	while(line->getStop(currentStop)->getDistanceToNext()!= distance){
		time++;
		distance = time * speed;
		cout <<setw(id*10)<<id<< '*' << endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	cout<<id<<" Esperando: "<<line->getStop(currentStop)->getName() << endl;
	lock_guard<mutex> guard(line->stops[currentStop+1]->m);
	cout<<id<<" .Parada: "<<line->getStop(currentStop)->getName() << endl;
	std::this_thread::sleep_for (std::chrono::seconds(4));
	currentStop++;

}

void Train::goToEnd(){
	for (unsigned short i=0; i<line->size();i++){
		if (i!=(line->size()-1))
			go();
		else{
			cout<<setw(10+id)<< line->getStop(currentStop)->getName()<<endl;
		}
	}
}

void Train::stop(){
	currentStop++;
	distance = line->getStop(currentStop)->getDistanceToNext();
}
