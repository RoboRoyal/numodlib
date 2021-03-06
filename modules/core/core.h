#ifndef CORE_H
# define CORE_H

# include <sys/stat.h>

namespace co {

// system helper functions
inline bool checkIfFileExists ( const std::string& Filename ) {
    struct stat buffer;   
    return ( stat ( Filename.c_str(), &buffer) == 0 ); 
  }

// core struct
struct Core {
    static constexpr long double Pi = 3.14159265358979323846;

    static void displayWarning ( const std::string& TextMassage ) {
        std::cout << "WARNING: " << TextMassage << std::endl << std::endl;   
      }
  };

}

#endif
