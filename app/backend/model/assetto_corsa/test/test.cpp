// Tests for all the models developped
// Manual individual compilation command : 
// g++ test.cpp ../src/access_shme_assetto_corsa.cpp -o test
#include "../header/access_shme_assetto_corsa.hpp" // ACSharedMemoryStatic, Connect, Disconnect
#include <iostream> // wcout, endl, cout 

int main() {
    ACSharedMemoryStatic statics;
    ACSharedMemoryPhysics physics;
    ACSharedMemoryGraphics graphics;
    
    if (statics.Connect()) {
        std::wcout << "Connected to static shared memory successfully :" << std::endl 
        << "AC version : " << statics.staticData->acVersion << std::endl 
        << "Shared memory version : " << statics.staticData->smVersion << std::endl 
        << "Car skin : " << statics.staticData->carSkin << std::endl;
    }
    if (physics.Connect()) {
        std::wcout << "Connected to physics shared memory successfully :" << std::endl 
        << "RPM : " << physics.physicsData->rpms << std::endl 
        << "Throttle : " << physics.physicsData->gas << std::endl 
        << "Clutch :" << physics.physicsData->clutch << std::endl
        << "Ai controlling : " << physics.physicsData->isAIControlled << std::endl
        << "Brake bias : " << physics.physicsData->brakeBias << std::endl;
    }
    if (graphics.Connect()) {
        std::wcout << "Connected to graphics shared memory successfully :" << std::endl 
        << "Status : " << graphics.graphicsData->status << std::endl 
        << "Session : " << graphics.graphicsData->session << std::endl
        << "Current time : " << graphics.graphicsData->currentTime << std::endl 
        << "Normalized car position :" << graphics.graphicsData->normalizedCarPosition << std::endl
        << "In pitlane : " << graphics.graphicsData->isInPitlane << std::endl
        << "Flag : " << graphics.graphicsData->flag << std::endl;
    }
    
    if (statics.Disconnect() && physics.Disconnect() && graphics.Disconnect()) {
        std::cout << "Successfully disconnected from shared memory files" << std::endl;
    }
    return 1;
}