# Assetto Corsa data model

*Bespoke data access model for the racing simulator Assetto Corsa.*

Assetto Corsa real time session data is stocked in three Shared Memory files :

**SPageFileStatics** : "The following members are initialized when the instance starts and never changes until the instance is closed"
**SPageFilePhysics** : "The following members change at each graphic step. They all refer to the player’s car."
**SPageFileGraphics** : "The following members change at each graphic step. They all refer to the player’s car."

When looking at the document AC Shared Memory Documentation (official Kunos documentation for shared memory data), we can clearly see the types, names and utility of each variable for every Shared Memory files.

What we can do is first of all make different structures representing the content in all Assetto Corsa's Shared Memory files. Then, we can implement the connexion to each shared memory files. Finally, we can cast the actual value of the shared memory file to the structure we made before.

Ressources : 
https://fr.scribd.com/document/629251108/ACSharedMemoryDocumentation
https://assettocorsamods.net/threads/getting-started-with-ac-app-developing.716/#post-16280
https://assettocorsamods.net/threads/doc-shared-memory-reference.58/
https://learn.microsoft.com/fr-fr/windows/win32/memory/creating-named-shared-memory
https://stackoverflow.com/questions/8965655/how-can-the-c-preprocessor-be-used-on-strings