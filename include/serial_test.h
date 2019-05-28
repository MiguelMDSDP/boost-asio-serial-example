// Copyright Miguel dos Santos 2019

#ifndef SERIAL_TEST_H
#define SERIAL_TEST_H

#include <string>

#include <boost/asio.hpp>

namespace testing_serial {

class SerialTest {
    private:
        boost::asio::streambuf buf_;
        boost::asio::io_service io_service_;

        std::size_t n;

        std::string data_received_;

    public:
        SerialTest(std::string serial_port_name = "/dev/ttyACM0");
        ~SerialTest();

        std::string get_data();
};

} // namespace testing_serial

#endif // SERIAL_TEST_H