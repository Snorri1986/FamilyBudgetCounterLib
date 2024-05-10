// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <cmath>
#include <iostream>

// common functions signatures
char* getIncomeGraphics(double* incomeValues);
char* getMyGroceriesGraphics(double* groceriesValues);
char* getMyHousingGraphics(double* housingValues);
char* getMyTravellingGraphics(double* travellingValues);
char* getMyEntertainmentGraphics(double* entertainmentValues);
char* getMyHealthGraphics(double* healthValues);
char* getMyMobileInternetGraphics(double* mobileInternetValues);
void cleanMemory();

const int dividerDKK = 100;
// global arrays
char* arrayIncomeX;
char* arrayGroceriesX;
char* arrayHousingX;
char* arrayTravellingX;
char* arrayEntertainmentX;
char* arrayHealthX;
char* arrayMobileInternetX;

char* getIncomeGraphics(double* incomeValues) {
    int arrLength = sizeof(incomeValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += incomeValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayIncomeX = new char[countX];
    int arrSize = sizeof(arrayIncomeX);
    for (int i = 0; i <= arrSize;i++) {
        arrayIncomeX[i] = 'X';
    }
    return arrayIncomeX;
}

char* getMyGroceriesGraphics(double* groceriesValues) {
    int arrLength = sizeof(groceriesValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += groceriesValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayGroceriesX = new char[countX];
    int arrSize = sizeof(arrayGroceriesX);
    for (int i = 0; i <= arrSize;i++) {
        arrayGroceriesX[i] = 'X';
    }
    return arrayGroceriesX;
}

char* getMyHousingGraphics(double* housingValues) {
    int arrLength = sizeof(housingValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += housingValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayHousingX = new char[countX];
    int arrSize = sizeof(arrayHousingX);
    for (int i = 0; i <= arrSize;i++) {
        arrayHousingX[i] = 'X';
    }
    return arrayHousingX;
}

char* getMyTravellingGraphics(double* travellingValues) {
    int arrLength = sizeof(travellingValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += travellingValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayTravellingX = new char[countX];
    int arrSize = sizeof(arrayTravellingX);
    for (int i = 0; i <= arrSize;i++) {
        arrayTravellingX[i] = 'X';
    }
    return arrayTravellingX;
}

char* getMyEntertainmentGraphics(double* entertainmentValues) {
    int arrLength = sizeof(entertainmentValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += entertainmentValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayEntertainmentX = new char[countX];
    int arrSize = sizeof(arrayEntertainmentX);
    for (int i = 0; i <= arrSize;i++) {
        arrayEntertainmentX[i] = 'X';
    }
    return arrayEntertainmentX;
}

char* getMyHealthGraphics(double* healthValues) {
    int arrLength = sizeof(healthValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += healthValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayHealthX = new char[countX];
    int arrSize = sizeof(arrayHealthX);
    for (int i = 0; i <= arrSize;i++) {
        arrayHealthX[i] = 'X';
    }
    return arrayHealthX;
}

char* getMyMobileInternetGraphics(double* mobileInternetValues) {
    int arrLength = sizeof(mobileInternetValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += mobileInternetValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayMobileInternetX = new char[countX];
    int arrSize = sizeof(arrayMobileInternetX);
    for (int i = 0; i <= arrSize;i++) {
        arrayMobileInternetX[i] = 'X';
    }
    return arrayMobileInternetX;
}

void cleanMemory() {
    //delete[] arrayIncomeX;
    delete[] arrayGroceriesX;
    delete[] arrayHousingX;
    delete[] arrayTravellingX;
    delete[] arrayEntertainmentX;
    delete[] arrayHealthX;
    delete[] arrayMobileInternetX;
}