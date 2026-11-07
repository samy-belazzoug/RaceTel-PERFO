# Assetto Corsa Competizione data model

*Bespoke data access model for the racing simulator Assetto Corsa Competizione.*

Assetto Corsa real time session data is stocked in three Shared Memory files :

SPageFileStatics : "The following members are initialized when the instance starts and never changes until the instance is closed." 
SPageFilePhysics : "The following members change at each graphic step. They all refer to the player’s car." 
SPageFileGraphics : "The following members are updated at each graphical step. They mostly refer to player’s car except for carCoordinates and carID, which refer to the cars currently on track."


Ressources : 
https://www.assettocorsa.net/forum/index.php?threads/acc-shared-memory-documentation.59965/