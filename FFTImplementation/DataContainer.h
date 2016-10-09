#pragma once

#include <vector>

using namespace std;

class DataContainer
{

public:
	DataContainer(vector<double> td_data);
	virtual ~DataContainer();

private:
	vector<double> m_td_data;

};

