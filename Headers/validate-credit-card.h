#ifndef VALIDATECREDITCARD_H
#define VALIDATECREDITCARD_H

#include <string>

bool isDigits(const std::string& str, int& len);
int sumOddPlaces(const std::string& str, int& len);
int getDigit(int num);
int sumEvenPlaces(const std::string& str, int& len);

#endif // VALIDATECREDITCARD_H
