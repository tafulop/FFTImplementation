// FFTImplementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "DataGenerator.h"
#include "DataContainer.h"

using namespace std;

int main()
{
    DataContainer data(1024);

    // base
	DataGenerator::generateSinus(data.m_td_data, 1);
    data.print_to_file("sinus_1.txt");

    // 2nd harmonic
    DataGenerator::generateSinus(data.m_td_data, 0.8, 2, true);
    data.print_to_file("sinus_2.txt");

    // 3rd harmonic
    DataGenerator::generateSinus(data.m_td_data, 0.5, 3, true);
    data.print_to_file("sinus_3.txt");

	return 0;

}
