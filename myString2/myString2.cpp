// myString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	//test
	char name[50];
	cout << "enter a name" << endl;
	gets_s(name);
	cout << "your name s " << name << endl;
	return 0;
}

