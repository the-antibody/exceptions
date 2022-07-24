#include <stdio.h>
#include <string.h>

// exceptions
enum exception_type {
    YOU = 0,
    MAKE = 1,
    YOUR = 2,
    OWN = 3,
    EXCEPTIONS = 4
};

// public accessible
typedef enum exception_type exception_type;

// exception structure
struct exception {
    char *message;
    exception_type type;
};

// public accessible
typedef struct exception exception;

/**
 * @brief Convert exception type to string
 * 
 * @param var - the variable to apply to
 * @param type - the exception type
 */
void to_string(char *var, exception_type type)
{
    // switch exception type
    switch (type)
    {
        // get messages
        case 0: strcpy(var, "YOU"); break;
        case 1: strcpy(var, "MAKE"); break;
        case 2: strcpy(var, "YOUR"); break;
        case 3: strcpy(var, "OWN"); break;
        case 4: strcpy(var, "EXCEPTIONS"); break;
    }
}

/**
 * @brief Throw an exception
 * 
 * @param exception - the exception
 */
void _throw(exception *exception)
{
    // get exception type
    char type[100];
    to_string(type, exception->type);

    // throw
    printf("Error: %s\n%s\n", type, exception->message);
}
