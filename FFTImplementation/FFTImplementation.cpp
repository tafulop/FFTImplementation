// FFTImplementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "DataGenerator.h"

using namespace std;




int main()
{
	vector<double>* data = new vector<double>(size_t(1024));

	DataGenerator::generateSinus(data, 1, 2);

	return 0;

}


