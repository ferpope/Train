//============================================================================
// Name        : Train.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Train.h"

int main(){
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
