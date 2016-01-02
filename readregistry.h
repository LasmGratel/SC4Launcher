#ifndef READREGISTRY_H
#define READREGISTRY_H

#include <string>
#include <windows.h>
#include <tchar.h>

class ReadRegistry
{
public:
    ReadRegistry();
    std::string getGameDir();
};

#endif // READREGISTRY_H
