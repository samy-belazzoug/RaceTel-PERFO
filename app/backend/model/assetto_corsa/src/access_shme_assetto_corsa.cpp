// access shared memory assetto corsa
#include "../header/access_shme_assetto_corsa.hpp"

// static


ACSharedMemoryStatic::~ACSharedMemoryStatic() {
}

bool ACSharedMemoryStatic::Connect() {

   hMapFile = OpenFileMapping(FILE_MAP_READ, FALSE, TEXT("Local\\acpmf_static"));
    
   if (hMapFile == NULL)
   {
      _tprintf(TEXT("Could not open file mapping object (%d).\n"),
             GetLastError());
      return false;
   }

   pBuf = (LPTSTR) MapViewOfFile(hMapFile, // handle to map object
               FILE_MAP_READ,  // read/write permission
               0,
               0,
               0 
            );
   if (pBuf == NULL)
   {
      _tprintf(TEXT("Could not map view of file (%d).\n"),
             GetLastError());

      CloseHandle(hMapFile);
       return false;
   }

   staticData = (SPageFileStatic*)pBuf;
   return true;
}

bool ACSharedMemoryStatic::Disconnect() {
   if (pBuf != NULL) { UnmapViewOfFile(pBuf);}
   else { return false; }
   if (hMapFile != NULL) { CloseHandle(hMapFile); } 
   else { return false; }
   return true;
}


// physics


ACSharedMemoryPhysics::~ACSharedMemoryPhysics() {
}

bool ACSharedMemoryPhysics::Connect() {

   hMapFile = OpenFileMapping(FILE_MAP_READ, FALSE, TEXT("Local\\acpmf_physics"));
    
   if (hMapFile == NULL)
   {
      _tprintf(TEXT("Could not open file mapping object (%d).\n"),
             GetLastError());
      return false;
   }

   pBuf = (LPTSTR) MapViewOfFile(hMapFile, // handle to map object
               FILE_MAP_READ,  // read/write permission
               0,
               0,
               0 
            );
   if (pBuf == NULL)
   {
      _tprintf(TEXT("Could not map view of file (%d).\n"),
             GetLastError());

      CloseHandle(hMapFile);
       return false;
   }

   physicsData = (SPageFilePhysics*)pBuf;
   return true;
}

bool ACSharedMemoryPhysics::Disconnect() {
   if (pBuf != NULL) { UnmapViewOfFile(pBuf);}
   else { return false; }
   if (hMapFile != NULL) { CloseHandle(hMapFile); } 
   else { return false; }
   return true;
}


// graphics


ACSharedMemoryGraphics::~ACSharedMemoryGraphics() {
}

bool ACSharedMemoryGraphics::Connect() {

   hMapFile = OpenFileMapping(FILE_MAP_READ, FALSE, TEXT("Local\\acpmf_graphics"));
    
   if (hMapFile == NULL)
   {
      _tprintf(TEXT("Could not open file mapping object (%d).\n"),
             GetLastError());
      return false;
   }

   pBuf = (LPTSTR) MapViewOfFile(hMapFile, // handle to map object
               FILE_MAP_READ,  // read/write permission
               0,
               0,
               0 
            );
   if (pBuf == NULL)
   {
      _tprintf(TEXT("Could not map view of file (%d).\n"),
             GetLastError());

      CloseHandle(hMapFile);
       return false;
   }

   graphicsData = (SPageFileGraphics*)pBuf;
   return true;
}

bool ACSharedMemoryGraphics::Disconnect() {
   if (pBuf != NULL) { UnmapViewOfFile(pBuf);}
   else { return false; }
   if (hMapFile != NULL) { CloseHandle(hMapFile); } 
   else { return false; }
   return true;
}