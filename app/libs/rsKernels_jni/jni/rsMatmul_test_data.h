#include "common.h"
#include <string.h>

const int m = 256;
const int n = 192;
const int k = 1152;

const int a_count = (m * k);
const int b_count = (n * k);
const int c_count = (m * n);

#define RAW_DATA_TYPE unsigned char

RAW_DATA_TYPE* getA();
RAW_DATA_TYPE* getB();
RAW_DATA_TYPE* getC();
