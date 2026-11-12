// Access shared memory assetto corsa
// This file allows assetto corsa live sessions's data access by a connexion to its shared memory files

#include "data_shme_assetto_corsa.hpp"
#include <windows.h> // ,MapViewOfFile
#include <tchar.h>
#include <stdio.h>

// Allow to get data from Assetto Corsa static shared memory file
class ACSharedMemoryStatic {
private:
    HANDLE hMapFile;
    LPCTSTR pBuf;
public:
    // Static data of the current session
    struct SPageFileStatic *staticData;
    
    // Destructor of the class
    ~ACSharedMemoryStatic();
    
    // Connect to Assetto Corsa physics Shared Memory file
    // Returns true if succeeded and false if not
    bool Connect();
    
    // Disconnect properly from Assetto Corsa physics shared memory file
    // Returns true if succeeded and false if not
    bool Disconnect();
};

// Allow to get data from Assetto Corsa physics shared memory file
class ACSharedMemoryPhysics {
private:
    HANDLE hMapFile;
    LPCTSTR pBuf;
public:
    // Static data of the current session
    struct SPageFilePhysics *physicsData;
    
    // Destructor of the class
    ~ACSharedMemoryPhysics();
    
    // Connect to Assetto Corsa physics Shared Memory file
    // Returns true if succeeded and false if not
    bool Connect();
    
    // Disconnect properly from Assetto Corsa physics shared memory file
    // Returns true if succeeded and false if not
    bool Disconnect();
};