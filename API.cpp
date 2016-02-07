/*
 *  API.c
 *
 *  This file will implement the API_MSG class.
 *  This class will be able to construct and destruct
 *  api message packets that need to be sent to the
 *  arduino
 *
 */

#include <stdint.h>

#define MAX_MSG_LENGTH 10


class API_MSG{
        private:
            uint16_t length;
            uint8_t frame_data[];
            uint8_t checksum;




};
