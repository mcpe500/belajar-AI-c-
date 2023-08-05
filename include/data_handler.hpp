#ifndef __DATA_HANDLER_H
#define __DATA_HANDLER_H

#include <fstream>
#include "stdint.h"
#include "data.hpp"
#include <vector>
#include <string>
#include <map>
#include <unordered_set>

class data_handler{
    std::vector<data * > *data_array;
    std::vector<data * > *training_data;
    std::vector<data * > *test_data;
    std::vector<data * > *validation_data;

    int num_classes;
    int feature_vector_size;
    std::map<uint8_t, int> class_map;

    // const 
}

#endif