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
	Stop* s1 = new Stop("Midgard", 1);
	Stop* s2 = new Stop("Asgard", 1);
	Stop* s3 = new Stop("Hel", 1);
	Stop* s4 = new Stop("Tres Cantos", 1);
	l1->addStop(s1);
	l1->addStop(s2);
	l1->addStop(s3);
	Line* l2= new Line;
	l2->addStop(s4);
	l2->addStop(s2);
	l2->addStop(s3);
	Train* train1 = new Train(1,l1);
	//	stopCreation(l2, "Paraíso", 3);
	//	stopCreation(l2, "Limbo", 4);
	//	stopCreation(l2, "Midgard", 2);
	//	stopCreation(l2, "Infierno", 2);

	stopCreation(l2, "Caribe", 1);
	stopCreation(l2, "Asgard", 1);
	stopCreation(l2, "Antártida", 1);
	stopCreation(l2, "Hel", 1);
	Train* train2 = new Train(1,l2);
	thread t1(task2, train1);
	thread t2(task2, train2);
	t1.join();
	t2.join();
}
