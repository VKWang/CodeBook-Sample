#include <cstdlib>
using namespace std;
// Function: String conversion
    double atof(const char* str);
        // Convert string to double
    int atoi(const char * str);
        // Convert string to integer
    long int atol(const char * str);
        // Convert string to long integer
    long long int atoll(const char * str);
        // Convert string to long long integer
    double strtod(const char* str, char** endptr);
        // Convert string to double;
    float strtof(const char* str, char** endptr);
        // Convert string to float
    long int strtol(const char* str, char** endptr, int base);
        // Convert string to long integer
    long double strtold(const char* str, char** endptr);
        // Convert string to long double
    long long int strtoll(const char* str, char** endptr, int base);
        // Convert string to long long integer
    unsigned long int strtoul(const char* str, char** endptr, int base);
        // Convert string to unsigned long intege
    unsigned long long int strtoull(const char* str, char** endptr, int base);
        // Convert string to unsigned long long integer
// Function: Integer arithmetics
    int abs(int n);
    long int llabs(long int n);
    long long int llabs(long long int n);
        // Absolute value