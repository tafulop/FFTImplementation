#include "stdafx.h"
#include "DataGenerator.h"


DataGenerator::DataGenerator()
{
}


DataGenerator::~DataGenerator()
{
}

void DataGenerator::generateSinus(vector<double>* target, 
									double amplitude, 
									double omega,
                                    bool additive) 
{
	
	// input argument check
	if (target == NULL || amplitude <= 0 || omega < 0)
	{
		std::cout << "Invalid parameter(s) for generateSinus() function. \n";
	}

	//  The vector should store the time domain values, therefore 
	//  the corresponding sinus wave value should be added. 
	//  To achieve this, the following equasion is used:
	//
	//                2 * Pi * i * w        
	//  f(i) = sin ( ---------------- ) * A
	//                 vector.size       
	//

	int i = 1;
	int size = target->size();

    if (additive)
    {
        for (auto it = target->begin(); it != target->end(); ++it, ++i)
        {
            (*it) += amplitude * sin(2 * 3.14 * i * omega / size);
        }
    }
    else
    {
        for (auto it = target->begin(); it != target->end(); ++it, ++i)
        {
            *it = amplitude * sin(2 * 3.14 * i * omega / size);
        }
    }

	std::cout << "Target populated.\n";
}
