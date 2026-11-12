// Tests for all the models developped
// Manual individual compilation command : 
// g++ test.cpp ../src/access_shme_assetto_corsa.cpp -o test
#include "../header/access_shme_assetto_corsa.hpp" // ACSharedMemoryStatic, Connect, Disconnect
#include <iostream> // wcout, endl, cout 

int main() {
    ACSharedMemoryStatic statics;
    ACSharedMemoryPhysics physics;
    if (statics.Connect()) {
        std::wcout << "Connected to static shared memory successfully :" << std::endl 
        << "AC version : " << statics.staticData->acVersion << std::endl 
        << "Shared memory version : " << statics.staticData->smVersion << std::endl 
        << "Car skin : " << statics.staticData->carSkin << std::endl;
    }
    if (physics.Connect()) {
        std::wcout << "Connected to physics shared memory successfully :" << std::endl 
        << "RPM : " << physics.physicsData->rpm << std::endl 
        << "Throttle : " << physics.physicsData->gas << std::endl 
        << "Brake bias : " << physics.physicsData->brakeBias << std::endl;
    }
    if (statics.Disconnect() && physics.Disconnect()) {
        std::cout << "Disconnected successfully from shared memory files" << std::endl;
    }
    return 1;
}