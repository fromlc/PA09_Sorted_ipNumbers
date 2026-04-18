//------------------------------------------------------------------------------
// PA09_Sorted_ipNumbers.cpp
//------------------------------------------------------------------------------
#include "List.hpp"

#include <cmath>
#include <cstdint>
#include <random>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int N_IP_NUMBERS = 10;

//------------------------------------------------------------------------------
// type definitions
//------------------------------------------------------------------------------
// random number distribution for IP address space
typedef std::uniform_int_distribution<uint32_t> IntDist32;

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
uint32_t generateIPNumber();

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    List ipList;

    // Your code goes here:
    //      - generate N_IP_NUMBERS random IP numbers of type uint32_t.
    //      - add each IP number to ipList.
    //      - display ipList Nodes in (ascending) sorted order.
    // #TODO

    for (int i = 0; i < N_IP_NUMBERS; i++)
    {
        ipList.addNode(generateIPNumber());
    }

    ipList.displayList();

    return 0;
}

//------------------------------------------------------------------------------
// - generates one random IP address number 
// - requests are random IP addresses (except 0)
// - queues each request in one of nPorts queues
// - reqMap maps port number to request queue
//------------------------------------------------------------------------------
inline uint32_t generateIPNumber()
{
    // declare and seed non-deterministic random number generators
    static std::random_device rd;
    static std::mt19937 mt(rd());

    //uint32_t max = pow(2, 32) - 1;
    static IntDist32 distIP(1, static_cast<uint32_t>((pow(2, 32) - 1)));

    return distIP(mt);
}

