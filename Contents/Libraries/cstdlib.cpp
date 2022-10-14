#include <cstdlib>
using namespace std;

int main() {

    // Functions
        // String conversion
            double atof (const char* str);  // Convert string to double; return 0.0 if no conversion
            int atoi (const char * str);    // Convert string to integer;
            long int atol ( const char * str ); // Convert string to long integer; return 0 if no conversion
            long long int atoll ( const char * str );   // Convert string to long long integer; return 0 if no conversion
            double strtod (const char* str, char** endptr); // Convert string to double; return 0.0 if no conversion, HUGE_VAL(cmath) if out of range
            float strtof (const char* str, char** endptr);  // Convert string to float

strtol
    Convert string to long integer (function)

strtold
    Convert string to long double (function)

strtoll
    Convert string to long long integer (function)

strtoul
    Convert string to unsigned long integer (function)

strtoull
    Convert string to unsigned long long integer (function)


Pseudo-random sequence generation

rand
    Generate random number (function)

srand
    Initialize random number generator (function)


Searching and sorting

bsearch
    Binary search in array (function)

qsort
    Sort elements of array (function)


Integer arithmetics

abs
    Absolute value (function)

div
    Integral division (function)

labs
    Absolute value (function)

ldiv
    Integral division (function)

llabs
    Absolute value (function)

lldiv
    Integral division (function)



Macro constants

NULL
    Null pointer (macro)

RAND_MAX
    Maximum value returned by rand (macro)



Types

div_t
    Structure returned by div (type)

ldiv_t
    Structure returned by ldiv (type)

lldiv_t
    Structure returned by lldiv (type)

size_t
    Unsigned integral type (type)


    return 0;
}