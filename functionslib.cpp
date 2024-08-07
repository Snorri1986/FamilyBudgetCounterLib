// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <cmath>
#include <iostream>

const int dividerDKK = 100;
// global arrays
char* arrayIncomeX;
char* arrayGroceriesX;
char* arrayHousingX;
char* arrayTravellingX;
char* arrayEntertainmentX;
char* arrayHealthX;
char* arrayMobileInternetX;


char* getIncomeGraphics(double arr_sum) {
    int countX = static_cast<int>(std::round(arr_sum / dividerDKK));
    if (countX <= 0) {
        std::cerr << "Error: Invalid array size." << std::endl;
    }
    char* arrayIncomeX = new char[countX];
    int arrSize = sizeof(arrayIncomeX);
    for (int i = 0; i <= arrSize;i++) {
        arrayIncomeX[i] = 'X';
    }
    return arrayIncomeX;
}


char* getMyGroceriesGraphics(double arr_sum) {
    int countX = static_cast<int>(std::round(arr_sum / dividerDKK));
    if (countX <= 0) {
        std::cerr << "Error: Invalid array size." << std::endl;
    }
    char* arrayGroceriesX = new char[countX];
    int arrSize = sizeof(arrayGroceriesX);
    for (int i = 0; i <= arrSize;i++) {
        arrayGroceriesX[i] = 'X';
    }
    return arrayGroceriesX;
}

char* getMyHousingGraphics(double arr_sum) {
    int countX = static_cast<int>(std::round(arr_sum / dividerDKK));
    if (countX <= 0) {
        std::cerr << "Error: Invalid array size." << std::endl;
    }
    char* arrayHousingX = new char[countX];
    int arrSize = sizeof(arrayHousingX);
    for (int i = 0; i <= arrSize;i++) {
        arrayHousingX[i] = 'X';
    }
    return arrayHousingX;
}


char* getMyTravellingGraphics(double arr_sum) {
    int countX = static_cast<int>(std::round(arr_sum / dividerDKK));
    if (countX <= 0) {
        std::cerr << "Error: Invalid array size." << std::endl;
    }
    char* arrayTravellingX = new char[countX];
    int arrSize = sizeof(arrayTravellingX);
    for (int i = 0; i <= arrSize;i++) {
        arrayTravellingX[i] = 'X';
    }
    return arrayTravellingX;
}


char* getMyEntertainmentGraphics(double arr_sum) {
    int countX = static_cast<int>(std::round(arr_sum / dividerDKK));
    if (countX <= 0) {
        std::cerr << "Error: Invalid array size." << std::endl;
    }
    char* arrayEntertainmentX = new char[countX];
    int arrSize = sizeof(arrayEntertainmentX);
    for (int i = 0; i <= arrSize;i++) {
        arrayEntertainmentX[i] = 'X';
    }
    return arrayEntertainmentX;
}

char* getMyHealthGraphics(double* healthValues,int size) {
    double sum = 0;
    for (int i = 0;i < size;i++) {
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

char* getMyMobileInternetGraphics(double* mobileInternetValues,int size) {
    double sum = 0;
    for (int i = 0;i < size;i++) {
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
    delete[] arrayGroceriesX;
    delete[] arrayHousingX;
    delete[] arrayTravellingX;
    delete[] arrayEntertainmentX;
    delete[] arrayHealthX;
    delete[] arrayMobileInternetX;
}