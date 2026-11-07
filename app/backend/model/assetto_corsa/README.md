# Assetto Corsa data model

*Bespoke data access model for the racing simulator Assetto Corsa.*

Assetto Corsa real time session data is stocked in three Shared Memory files :

SPageFileStatics : "The following members are initialized when the instance starts and never changes until the instance is closed"
SPageFilePhysics : "The following members change at each graphic step. They all refer to the player’s car."
SPageFileGraphics : "The following members change at each graphic step. They all refer to the player’s car."

Ressources : 
https://fr.scribd.com/document/629251108/ACSharedMemoryDocumentation
https://assettocorsamods.net/threads/getting-started-with-ac-app-developing.716/#post-16280
https://assettocorsamods.net/threads/doc-shared-memory-reference.58/