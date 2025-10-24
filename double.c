#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double maximum:%g\n", DBL_MAX);
    printf("double minimum:%g\n", DBL_MIN);
    printf("double precision:%d\n", DBL_DIG);
    printf("int maximum:%d\n", INT_MAX);
    printf("int minimum:%d\n", INT_MIN);
    printf("unsigned int maximum:%u\n", UINT_MAX);
    printf("char maximum:%d\n", CHAR_MAX);
    printf("char minimum:%d\n", CHAR_MIN);
    printf("unsigned char maximum:%u\n", UCHAR_MAX);
    printf("short maximum:%d\n", SHRT_MAX);
    printf("short minimum:%d\n", SHRT_MIN);
    printf("unsigned short maximum:%u\n", USHRT_MAX);
    printf("long maximum:%ld\n", LONG_MAX);
    printf("long minimum:%ld\n", LONG_MIN);
    printf("unsigned long maximum:%lu\n", LONG_MAX);
    printf("long long int maximum:%lld\n", LLONG_MAX);
    printf("long long int maximum:%lld\n", LLONG_MIN);
    printf("unsigned long long int maximum:%llu\n", ULLONG_MAX);
    printf("float maximum:%g\n", FLT_MAX);
    printf("float minimum:%g\n", FLT_MIN);
    printf("float precision:%d\n", FLT_DIG);
    printf("long double maximum:%Lg\n", LDBL_MAX);
    printf("long double minimum:%Lg\n", LDBL_MIN);
    printf("long double precision:%d\n", LDBL_DIG);
    return 0;
}