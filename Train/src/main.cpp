//============================================================================
// Name        : Train.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Train.h"
#include <mutex>
#include <vector>
using namespace std;


void task2(Train* t){
	t->goToEnd();
}

void task1(Train* t){
	t->go();
}

void stopCreation(Line* l, string nameStop, int distance){
	Stop* s = new Stop(nameStop, distance);
	l->addStop(s);
}




int main(){
	Line* l1 = new Line;
	stopCreation(l1,"Midgard", 1);
	stopCreation(l1,"Asgard", 1);
	stopCreation(l1,"Hel", 1);
	Line* l2= new Line;
	Train* train1 = new Train(1,l1);
//	stopCreation(l2, "Paraíso", 3);
//	stopCreation(l2, "Limbo", 4);
//	stopCreation(l2, "Midgard", 2);
//	stopCreation(l2, "Infierno", 2);

	stopCreation(l2, "Midgard", 1);
	stopCreation(l2, "Asgard", 1);
	stopCreation(l2, "Antártida", 1);
	stopCreation(l2, "Hel", 1);
	Train* train2 = new Train(1,l2);
	thread t1(task2, train1);
	thread t2(task2, train2);
	t1.join();
	t2.join();
}
