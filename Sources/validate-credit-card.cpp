#include "validate-credit-card.h"

// Note: Read input as string to avoid hitting max integer bounds.

// Modified implementation of isdigit() to avoid including <cctype> library
// Function makes sure that input string meets criteria of credit card
// containing only digits 0-9 and is between 13-19 digits in length.
bool isDigits(const std::string& str, int& len){
    if(len < 13 || len > 19){
        return false;
    }
    for(int i = 0; i < len; i++){
        if(str[i] < '0' || str[i] > '9'){
            return false;
        }
    }

    return true;
}

// Add up all digits in odd positions starting from the right using getDigit().
int sumOddPlaces(const std::string& str, int& len){
    int sum = 0;
    for(int i = len - 1; i >= 0; i -= 2){
        sum += str[i] - '0';
    }
    return sum;
}

// getDigit() takes in an integer as input and will return the integer if
// it is a single digit. Else, the two digits composing the integer will
// be added together.
int getDigit(int num){
    if(num < 9){
        return num;
    }
    return (num / 10) + (num % 10);
}

// Double each digit in even positions starting from the right
// and add them all up using getDigit().
int sumEvenPlaces(const std::string& str, int& len){
    int sum = 0;
    for(int i = len - 2; i >= 0; i -= 2){
        //Check if works without typecasting
        sum += getDigit((str[i] - '0') * 2);
    }
    return sum;
}
