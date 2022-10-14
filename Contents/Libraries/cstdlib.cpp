#include <cstdlib>
using namespace std;
{
// Function: String conversion
    double atof(const char* str);
        // char* 轉 double
    int atoi(const char * str);
        // char* 轉 int
    long int atol(const char * str);
        // char* 轉 long int
    long long int atoll(const char * str);
        // char* 轉 long long int
    double strtod(const char* str, char** endptr);
        // char* 轉 double;
    float strtof(const char* str, char** endptr);
        // char* 轉 float
    long int strtol(const char* str, char** endptr, int base);
        // char*(base) 轉 long int 且指向轉換子字串之末
    long double strtold(const char* str, char** endptr);
        // char*(base) 轉 long double 且指向轉換子字串之末
    long long int strtoll(const char* str, char** endptr, int base);
        // char*(base) 轉 long long int 且指向轉換子字串之末
    unsigned long int strtoul(const char* str, char** endptr, int base);
        // char*(base) 轉 unsigned long int 且指向轉換子字串之末
    unsigned long long int strtoull(const char* str, char** endptr, int base);
        // char*(base) 轉 unsigned long long int 且指向轉換子字串之末
// Function: Integer arithmetics
    int abs(int n);
    long int llabs(long int n);
    long long int llabs(long long int n);
        // Absolute value
}