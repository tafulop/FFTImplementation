#pragma once
#include <vector>
#include <math.h>
#include <iostream>

#define _USE_MATH_DEFINES

using namespace std;

class DataGenerator
{
public:
	DataGenerator();
	~DataGenerator();


	static void generateSinus(vector<double>* target, double amplitude, double omega = 1);
};

