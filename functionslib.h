#ifndef FUNCTIONSLIB_H  // Header guards to prevent multiple inclusion
#define FUNCTIONSLIB_H

char* getIncomeGraphics(double arr_sum);
//char* getMyGroceriesGraphics(double* groceriesValues,int size);
char* getMyGroceriesGraphics(double arr_sum);
char* getMyHousingGraphics(double* housingValues,int size);
char* getMyTravellingGraphics(double* travellingValues,int size);
char* getMyEntertainmentGraphics(double* entertainmentValues,int size);
char* getMyHealthGraphics(double* healthValues,int size);
char* getMyMobileInternetGraphics(double* mobileInternetValues,int size);
void cleanMemory();

#endif
