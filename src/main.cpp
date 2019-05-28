// Copyright Miguel dos Santos 2019

#include "serial_test.h"

#include <iostream>
#include <string>

int main() {
    testing_serial::SerialTest test_serial;

    std::cout << "Data received: " << test_serial.get_data() << std::endl;

    return 0;
}