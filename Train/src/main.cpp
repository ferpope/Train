//============================================================================
// Name        : Train.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Train.h"

void task2(){
	Stop s1("Asgard", 1);
	Line l;
	l.addStop(s1);
	Stop s2("Midgard", 4);
	l.addStop(s2);
	Stop s3("Hel", 2);
	l.addStop(s3);
	Train t1(1,l);
	t1.goToEnd();
}

void task1(void){
	Stop s1("Paraíso", 3);
	Line l;
	l.addStop(s1);
	Stop s2("Limbo", 4);
	l.addStop(s2);
	Stop s3("Infierno", 2);
	l.addStop(s3);
	Train t1(1,l);
	t1.goToEnd();
}

int main(){
	thread t(task1);
	thread t2(task2);
	t.join();
	t2.join();

}
