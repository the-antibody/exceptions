#include <iostream>

#include "exceptions.hpp"

int main(int argc, char *argv[])
{
  // check argument length
  if (argc != 2)
  {
    // create the exception
    exception _exception("Incorrect Arguments!", INCORRECT_ARGUMENTS);
    
    // throw the exception
    _exception.throw_exception();
    
    exit(0);
  }
}
