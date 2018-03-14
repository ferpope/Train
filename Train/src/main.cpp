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



int main(){
	Stop sl1("A", 3);
	Stop sl2("B", 2);
	Stop sl3("C", 5);
	Stop s1("Z", 2);
	Stop s2("Y", 4);
	Stop s3("X", 3);
	Line l1;
	Line l2;
	l1.addStop(sl1);
	l1.addStop(sl2);
	l1.addStop(sl3);
	l2.addStop(s1);
	l2.addStop(s2);
	l2.addStop(s3);
	Train train1 (1,l1);
	Train train2 (1,l2);
	thread t1(task2, train1);
	thread t2(task2, train2);
	t1.join();
	t2.join();

}
// void task2(){
// 	Stop s1("Asgard", 1);
// 	Line l;
// 	l.addStop(s1);
// 	Stop s2("Midgard", 4);
// 	l.addStop(s2);
// 	Stop s3("Hel", 2);
// 	l.addStop(s3);
// 	Train t1(1,l);
// 	t1.goToEnd();
// }
//
// void task1(void){
// 	Stop s1("Paraíso", 3);
// 	Line l;
// 	l.addStop(s1);
// 	Stop s2("Limbo", 4);
// 	l.addStop(s2);
// 	Stop s3("Infierno", 2);
// 	l.addStop(s3);
// 	Train t1(1,l);
// 	t1.goToEnd();
// }
