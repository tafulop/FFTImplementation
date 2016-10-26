#pragma once

#include <vector>
#include <map>
#include <fstream>

using namespace std;

class DataContainer
{

public:
	DataContainer(size_t size);
	virtual ~DataContainer();

    vector<double>* m_td_data;
    map<int, double>* m_spectrum;

    void print_to_file(const string& filename);

private:
	

};

