#pragma once
#include "DataContainer.h"
class FourierTransformator
{
public:
    FourierTransformator();
    ~FourierTransformator();

    static void DFT(DataContainer& data_container, int freq_limit = 5);
};

