// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <cmath> 

// common functions signatures
int showGreetingMessage();
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