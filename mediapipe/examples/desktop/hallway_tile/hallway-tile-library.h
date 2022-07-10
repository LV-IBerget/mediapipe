#pragma once

#if defined(_MSC_VER) // M$VS
#define DLL_EXPORT __declspec(dllexport)
#define DLL_IMPORT __declspec(dllimport)
#elif defined(__GNUC__) // GCC
#define DLL_EXPORT __attribute__((visibility("default")))
#define DLL_IMPORT
#else
#define DLL_EXPORT
#define DLL_IMPORT
#pragma warning Unknown dynamic link import/export semantics.
#endif

#if defined(HALLWAYTILE_API_IMPORTS)
#define HALLWAYTILE_API DLL_IMPORT
#else
#define HALLWAYTILE_API DLL_EXPORT
#endif

#include <cstdlib>

/* Call from outside of DLL */
extern "C"
{
    HALLWAYTILE_API int dllmain(int argc, char* argv[]);
}

