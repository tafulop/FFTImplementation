#include "stdafx.h"
#include "FourierTransformator.h"
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <complex>

using namespace std;

FourierTransformator::FourierTransformator()
{
}


FourierTransformator::~FourierTransformator()
{
}

void FourierTransformator::DFT(DataContainer& data_container, int freq_limit)
{
    cout << "Calculation of DFT started." << endl;

    // *******************************************
    // Applied DFT equasion:
    //
    //          2    N - 1
    // X(k) =  ---    sum ( x[n] * e ^ (-2 PI i k n / N)
    //          N    n = 0
    // 
    // N : data length
    // n : data index
    // k : frequency coefficient
    // 
    // ******************************************* 

    vector<double>* data = data_container.m_td_data;
    map<int, double>* spectrum = data_container.m_spectrum; 
    complex<double> sum = 0;
    int freq_coefficient = 1;

    for (sum = 0; freq_coefficient <= freq_limit; ++freq_coefficient)
    {
        // data vector iteration
        sum = 0;
        int n = 0;
        for (vector<double>::iterator it = data->begin();  it != data->end(); ++it, ++n)
        {
            complex<double> imag(0, 1);
            sum += (*it) * exp((-2 * 3.14 * freq_coefficient * n * imag / (double)data->size()));
        }

        double absolute = 2 * (abs(sum) / data->size());
        spectrum->emplace(freq_coefficient, absolute);

        cout << freq_coefficient << ". fequency coefficient = " << absolute << endl;
    }
}
