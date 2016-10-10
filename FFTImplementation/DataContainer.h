#pragma once

#include <vector>
#include <fstream>

using namespace std;

class DataContainer
{

public:
	DataContainer(size_t size);
	virtual ~DataContainer();

    vector<double>* m_td_data;

    void print_to_file(const string& filename);

private:
	

};

