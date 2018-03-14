//============================================================================
// Name        : Train.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Train.h"

void task2(Train t){
	t.goToEnd();
}

void task1(Train t){
	t.go();
}

void newTrain (int speed, Line l){
	Train(speed, l);
}

int main(){

	thread t(task1);
	thread t2(task2);
	t.join();
	t2.join();

}
