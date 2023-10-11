#include "IMPU.h"
#include "WMPU.h"


class SampleConfig{
    private:
        WMPU mpu;
    public:
        IMPU& getMPU();
};