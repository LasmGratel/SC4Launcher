#include "readregistry.h"


ReadRegistry::ReadRegistry()
{

}

std::string getGameDir64()
{
    HKEY hKey = NULL;
    DWORD dwSize = 0;
    DWORD dwDataType = 0;
    LPBYTE lpValue = NULL;
    LPCSTR lpValueName;
    lpValueName = "Install Dir";
    LPCSTR subKey;
    subKey = "SOFTWARE\\Wow6432Node\\Maxis\\SimCity 4";
    LONG lRet = ::RegOpenKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, KEY_QUERY_VALUE, &hKey);
    if(lRet != ERROR_SUCCESS)
    {
        return NULL;
    }
    ::RegQueryValueExA(hKey, lpValueName, 0, &dwDataType, lpValue, &dwSize);
    lpValue = (LPBYTE)malloc(dwSize);
    lRet = ::RegQueryValueExA(hKey, lpValueName, 0 ,&dwDataType, lpValue, &dwSize);
    if(lRet != ERROR_SUCCESS)
    {
        return NULL;
    }

    return (std::string)(char*)lpValue;
}

std::string ReadRegistry::getGameDir()
{
    HKEY hKey = NULL;
    DWORD dwSize = 0;
    DWORD dwDataType = 0;
    LPBYTE lpValue = NULL;
    LPCSTR const lpValueName = "Install Dir";
    LPCSTR const subKey = "SOFTWARE\\Maxis\\SimCity 4";
    LONG lRet = ::RegOpenKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, KEY_QUERY_VALUE, &hKey);
    if(lRet != ERROR_SUCCESS)
    {
        return getGameDir64();
    }
    ::RegQueryValueExA(hKey, lpValueName, 0, &dwDataType, lpValue, &dwSize);
    lpValue = (LPBYTE)malloc(dwSize);
    lRet = ::RegQueryValueExA(hKey, lpValueName, 0 ,&dwDataType, lpValue, &dwSize);
    if(lRet != ERROR_SUCCESS)
    {
        return getGameDir64();
    }

    return (std::string)(char*)lpValue;
}
