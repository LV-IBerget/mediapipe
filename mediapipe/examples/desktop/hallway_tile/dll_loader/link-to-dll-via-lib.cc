//Ian Berget: Define exports so that it knows to import from the .lib mapping file
#define HALLWAYTILE_API_IMPORTS

#include <iostream>
#include <string>
#include "../hallway-tile-library.h"

#undef main
int main(int argc, char* argv[]) {
    std::cout << "Loading DLL for execution ...";
    try
    {
        //"--calculator_graph_config_file=face_mesh_geometry_test_live.pbtxt < use in shortcut."
        dllmain(argc, argv);
    }
    catch (const std::exception &exc)
    {
        // catch anything thrown within try block that derives from std::exception
        std::cerr << exc.what();
    }

    std::string dummy;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);

}