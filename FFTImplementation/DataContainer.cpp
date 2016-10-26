#include "stdafx.h"
#include "DataContainer.h"


DataContainer::DataContainer(size_t size)
	: m_td_data(new std::vector<double>(size))
    , m_spectrum(new std::map<int, double>())
{

}


DataContainer::~DataContainer()
{
    delete m_td_data;
    delete m_spectrum;
}


void DataContainer::print_to_file(const string& filename)
{
    ofstream file;
    file.open(filename);
    int i = 1;
    
    for (auto it = m_td_data->begin(); it != m_td_data->end(); ++it)
    {
        file << i++ << "\t" << (*it) << "\n";
    }

    file.close();
}
