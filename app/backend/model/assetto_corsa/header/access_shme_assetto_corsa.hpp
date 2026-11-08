// Access shared memory assetto corsa
// This file allows assetto corsa live sessions's data access by a connexion to its shared memory files

#include "data_shme_assetto_corsa.hpp"

// Allow to get data from Assetto Corsa static shared memory file
class ACSharedMemoryStatic {
public:
    // Static data of the current session
    struct SPageFileStatic statics;
    // Destructor of the class
    ~ACSharedMemoryStatic();
    // Connect to Assetto Corsa static shared memory file
    void Connect();
    // Disconnect properly from Assetto Corsa static shared memory file
    void Disconnect();
};