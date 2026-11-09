// Tests for all the models developped
// Manual individual compilation command : 
// g++ test.cpp ../src/access_shme_assetto_corsa.cpp -o test
#include "../header/access_shme_assetto_corsa.hpp" // ACSharedMemoryStatic, Connect, Disconnect
#include <iostream> // wcout, endl, cout 

int main() {
    ACSharedMemoryStatic statics;
    if (statics.Connect()) {
        std::wcout << "It did connect :" << std::endl << "AC version : " << statics.staticData->acVersion << std::endl << "Shared memory version : " << statics.staticData->smVersion << std::endl << "Car skin : " << statics.staticData->carSkin;
        return 0;
    }
    if (statics.Disconnect()) {
        std::cout << "Disconnected successfully" << std::endl;
    }
    return 1;
}