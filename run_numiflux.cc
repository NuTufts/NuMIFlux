
#include <iostream>
#include <string>

#include "NuMIFlux.hh"

int main( int nargs, char** argv ) {

  std::cout << "RUN NUMI FLUX" << std::endl;

  std::string path = argv[1];
  std::string pattern = argv[2];
  NuMIFlux flux( path, pattern );
  flux.CalculateFlux();
  
}
