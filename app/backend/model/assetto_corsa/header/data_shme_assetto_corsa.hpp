// Data shared memory assetto corsa
// This document is the representation of Assetto Corsa's data in C++ language

// The following members are initialized when the instance starts and never changes until the instance is closed
struct SPageFileStatic {
    wchar_t smVersion[15]; // Version of the Shared Memory structure
    wchar_t acVersion[15]; // Version of Assetto Corsa
    int numberOfSessions = 0; // Number of sessions in this instance
    int numCars = 0; // Max number of possible cars on track
    wchar_t carModel[33]; // Name of the player's car
    wchar_t track[33]; // Name of the track
    wchar_t playerName[33]; // Name of the player
    wchar_t playerSurname[33]; // Surname of the player
    wchar_t playerNick[33]; // Nickname of the player
    int sectorCount = 0; // Number of track sectors
    float maxTorque = 0; // Max torque value of the player's car
    float maxPower = 0; // Max power value of the player's car
    int maxRpm = 0; // Max rpm value of the player's car
    float maxFuel = 0; // Max fuel value of the player's car
    float suspensionMaxTravel[4]; // Max travel distance of each tyre [Front Left, Front Right, Rear Left, Rear Right]
    float tyreRadius[4]; // Radius of each tyre [Front Left, Front Right, Rear Left, Rear Right]
    float maxTurboBoost = 0; // Max turbo value of the player's car
    float deprecated_1; // Do not use it
    float deprecated_2; // Do not use it
    int penaltiesEnabled = 0; // Cut penalties enabled: 1 (true) or 0 (false)
    float aidFuelRate = 0; // Fuel consumption rate: 0 (no cons), 1 (normal), 2 (double cons), etc.
    float aidTireRate = 0; // Tire wear rate: 0 (no wear), 1 (normal), 2 (double wear), etc. 
    float aidMechanicalDamage = 0; // Damage rate: 0 (no damage), to 1 (normal)
    float aidAllowTyreBlankets = 0; // Player starts with hot (optimal temp) tyres: 1 (true) or 0 (false)
    float aidStability = 0; // Stability aid: 0 (no aid) to 1 (full aid)
    int aidAutoClutch = 0; // If player's car has the "auto clutch" feature enabled: 0 or 1
    int aidAutoBlip = 0; // If player's car has the "auto blip" feature enabled: 0 or 1
    int hasDRS = 0; // If the player's car has the "DRS" system: 0 or 1
    int hasERS = 0; // If the player's car has the "ERS" system: 0 or 1
    int hasKERS = 0; // If the player's car has the "KERS" system: 0 or 1
    float kersMaxJ = 0; // Max KERS Joule value of the player's car
    int engineBrakeSettingsCount = 0; // Count of possible engine brake settings of the player's car
    int ersPowerControllerCount = 0;  // Count of the possible power controllers of the player's car
    float trackSPlineLength = 0; // Length of the spline of the selected track
    wchar_t trackConfiguration[33]; // Name of the track's layout (only multi-layout tracks)
    float ersMaxJ = 0; // Max ERS Joule value of the player's car
    int isTimedRace = 0; // 1 if the race is a timed one
    int hasExtraLap = 0; // 1 if the timed race is set with an extra lap
    wchar_t carSkin[33]; // Name of the used skin
    int reversedGridPositions; // How many positions are going to be swapped in the second race
    int PitWindowStart; // Pit window is open on Lap/Minute
    int PitWindowEnd; // Pit window is closed on Lap/Minute
};