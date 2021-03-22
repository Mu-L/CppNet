#ifndef CPPNET_CPPNET_CONFIGE
#define CPPNET_CPPNET_CONFIGE

#include <cstdint>

namespace cppnet {

// size of block memory in block memory pool.
static const uint16_t __mem_block_size     = 1024;
// how many block memory will be add to block memory pool.
static const uint16_t __mem_block_add_step = 5;
// max number of blocks in memory pool. If block memory more than this number, will reduce to half.
static const uint16_t __max_block_num     = 10;

// address buffer length in socket.
static const uint16_t __addr_str_len       = 16;
// log level. 
static const uint16_t __log_level          = 0; // not print
// log file name .
static const char* __log_file_name         = "CppNetLog";
// open log print.
static const bool __open_log               = false;

static const bool __reuse_port             = true;

#if ((defined __linux__) || (defined __APPLE__)) 

// every thread has a epoll handle.
static const bool __epoll_use_et                   = true;
// the start extend size of read buff while buff is't enough. 
static const uint16_t __linux_read_buff_expand_len = 4096;
// max extend size of read buff while buff is't enough. 
static const uint32_t __linux_read_buff_expand_max = 65536;
// max size of buffer will get from buffer. Be careful IOV_MAX.
static const uint16_t __linux_write_buff_get       = 4096;

#elif WIN32

// iocp buffer length.
static const uint16_t __iocp_buff_size = 8192;

#endif

}

#endif