/**
* hexToZZ.h
* Stores the decimal representation of a hexadecimal value in a variable of ZZ datatype 
* Uses the NTL library
* By Catherine Murdoch 2012
*/

#include <iostream>
#include <NTL/ZZ.h>
#include <math.h>

NTL_CLIENT

using namespace std;

ZZ hexToZZ(string hexVal);

ZZ toDec(char val);
