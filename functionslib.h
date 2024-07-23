#ifndef FUNCTIONSLIB_H  // Header guards to prevent multiple inclusion
#define FUNCTIONSLIB_H

char* getIncomeGraphics(double* incomeValues,int size);
char* getMyGroceriesGraphics(double* groceriesValues);
char* getMyHousingGraphics(double* housingValues);
char* getMyTravellingGraphics(double* travellingValues);
char* getMyEntertainmentGraphics(double* entertainmentValues);
char* getMyHealthGraphics(double* healthValues);
char* getMyMobileInternetGraphics(double* mobileInternetValues);
void cleanMemory();

#endif
