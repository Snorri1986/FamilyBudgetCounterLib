#ifndef FUNCTIONSLIB_H  // Header guards to prevent multiple inclusion
#define FUNCTIONSLIB_H

char* getIncomeGraphics(double* incomeValues,int size);
char* getMyGroceriesGraphics(double* groceriesValues,int size);
char* getMyHousingGraphics(double* housingValues,int size);
char* getMyTravellingGraphics(double* travellingValues);
char* getMyEntertainmentGraphics(double* entertainmentValues);
char* getMyHealthGraphics(double* healthValues);
char* getMyMobileInternetGraphics(double* mobileInternetValues);
void cleanMemory();

#endif
