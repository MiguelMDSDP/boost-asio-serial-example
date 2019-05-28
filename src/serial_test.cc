// Copyright Miguel dos Santos 2019

#include "serial_test.h"

namespace testing_serial {

SerialTest::SerialTest(std::string serial_port_name) {
    boost::asio::streambuf::mutable_buffers_type buffer = buf_.prepare(512);

    boost::asio::serial_port serial_port(io_service_);
    serial_port.open(serial_port_name);

    n = serial_port.read_some(buffer);
    buf_.commit(n);

    std::istream is(&buf_);
    is >> data_received_;

    serial_port.close();
};

SerialTest::~SerialTest() {};

std::string SerialTest::get_data() {return data_received_;}

} // namespace testing_serial