#include <stdio.h>

#include "exceptions.h"

int main(int argc, char *argv[])
{
  // check argument length
  if (argc != 2)
  {
    // create exception
    exception _exception = {
      "Incorrect Usage!",
      INCORRECT_USAGE
    };
    
    // throw exception
    _throw(&_exception);
    
    exit(0);
  }
}
