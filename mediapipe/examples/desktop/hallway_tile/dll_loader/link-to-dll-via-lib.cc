//Ian Berget: Define exports so that it knows to import from the .lib mapping file
#define HALLWAYTILE_API_IMPORTS

#include "../hallway-tile-library.h"

int main(int argc, char* argv[]) {
        dllmain(argc, argv);
}