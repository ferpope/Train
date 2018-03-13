/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"

Train::Train(int speed, Line line) : speed(speed), line(line) {
	currentStop = 0;
}

void Train::go(){
	int distance=0;
	int time=0;
	cout<<"Estás en la parada "<< line.getStop(currentStop).getName()<<endl;
	while(line.getStop(currentStop).getDistanceToNext()!= distance){
		time++;
		distance = time * speed;
		cout << '.' << endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	currentStop++;
}

void Train::goToEnd(){
	for (unsigned short i=0; i<line.size();i++){
		if (i!=(line.size()-1))
			go();
		else{
			cout<<"Estás en la parada "<< line.getStop(currentStop).getName()<<endl;
			stop();
		}
	}
}

void Train::stop(){

	cout<<"Final de trayecto \n";
}
