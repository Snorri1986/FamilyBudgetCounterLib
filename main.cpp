// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
#include "functionslib.h"
#include <crow.h>
#include <cstdlib>
#include <string>


// common tests signatures
int showGreetingMessage();

// unit tests signatures
void testShowGreetingMessage();
void testGetIncomeGraphics();
void testGetMyGroceriesGraphics();
void testGetMyHousingGraphics();
void testGetMyTravellingGraphics();
void testGetMyEntertainmentGraphics();
void testGetMyHealthGraphics();
void testGetMyMobileInternetGraphics();

int main()
{
    // needs to Heroku Cloud
    const char* port = std::getenv("PORT");
    std::string port_str = port ? port : "8080";
    std::cout << "Binding to port: " << port_str << std::endl;
    
    std::cout << "Unit tests...." << std::endl;
    std::cout << "showGreetingMessage()....";
    testShowGreetingMessage();
    std::cout << std::endl;
    std::cout << "getIncomeGraphics()....";
    testGetIncomeGraphics();
    std::cout << std::endl;
    std::cout << "getMyGroceriesGraphics()....";
    testGetMyGroceriesGraphics();
    std::cout << std::endl;
    std::cout << "getMyHousingGraphics()....";
    testGetMyHousingGraphics();
    std::cout << std::endl;
    std::cout << "getMyTravellingGraphics()....";
    testGetMyTravellingGraphics();
    std::cout << std::endl;
    std::cout << "getMyEntertainmentGraphics()....";
    testGetMyEntertainmentGraphics();
    std::cout << std::endl;
    std::cout << "getMyHealthGraphics()....";
    testGetMyHealthGraphics();
    std::cout << std::endl;
    std::cout << "getMyMobileInternetGraphics()....";
    testGetMyMobileInternetGraphics();
    /* ------------------------------------------- */
    std::cout << "-------------------------------------------" << std::endl;
    showGreetingMessage();

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
        ([]() {
        return "FamilyBudgetAPI v1";
            });

    // double = sum of arrays value
    CROW_ROUTE(app, "/v1/income/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }
        
        char* x_array = getIncomeGraphics(array_sum);
        return std::string(x_array);
            });

    CROW_ROUTE(app, "/v1/groceries/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }

        char* x_array = getMyGroceriesGraphics(array_sum);
        return std::string(x_array);
            });

    CROW_ROUTE(app, "/v1/housing/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }

        char* x_array = getMyHousingGraphics(array_sum);
        return std::string(x_array);
        });

    CROW_ROUTE(app, "/v1/travel/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }

        char* x_array = getMyTravellingGraphics(array_sum);
        return std::string(x_array);
        });

    CROW_ROUTE(app, "/v1/entertainment/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }
        char* x_array = getMyEntertainmentGraphics(array_sum);
        return std::string(x_array);
        });

    CROW_ROUTE(app, "/v1/health/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }
        char* x_array = getMyHealthGraphics(array_sum);
        return std::string(x_array);
        });

    CROW_ROUTE(app, "/v1/telecom/<double>")
        ([](double array_sum) {
        if (array_sum == 0 || array_sum < 0) {
            return std::string("HTTP 400 Bad request");
        }
        char* x_array = getMyMobileInternetGraphics(array_sum);
        return std::string(x_array);
        });

    app.port(8080).multithreaded().run();

    system("pause>0");
    return 0;
}

   // return int value needs for unit tests
int showGreetingMessage() {
    std::cout << "Welcome to FamilyBudgetCounter Library" << std::endl;
    std::cout << "In a few minutes I will count all your expances and you can see result in Java application" << std::endl;
    std::cout << "It was a pleasure to work for you!See you later!" << std::endl;
    return 0;
}

/* ------------------------------------------- */

// unit test methods
void testShowGreetingMessage() {
    int expected = 0; // 0 - OK, 1 - Errors
    std::cout.setstate(std::ios_base::failbit);
    int actual = showGreetingMessage();
    if (expected == actual) {
    std::cout.clear();
        std::cout << "PASSED" << std::endl;
    }  else
    {
        std::cout << "NOT PASSED" << std::endl;
    }
}


void testGetIncomeGraphics() {
    double testArr[5] = { 23.5, 1200.5, 2300.7, 2500.8, 2700.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getIncomeGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
       std::cout << "PASSED" << std::endl;
    }
   else {
      std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyGroceriesGraphics() {
    double testArr[5] = { 33.5, 1222.5, 2345.7, 2512.8, 2720.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyGroceriesGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyHousingGraphics() {
    double testArr[5] = { 38.5, 1322.5, 2350.7, 2550.8, 2750.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyHousingGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyTravellingGraphics() {
    double testArr[5] = { 40.5, 1400.5, 2370.7, 2570.8, 2800.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyTravellingGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyEntertainmentGraphics() {
    double testArr[5] = { 44.5, 1500.5, 2400.7, 2700.8, 3000.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyEntertainmentGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyHealthGraphics() {
    double testArr[5] = { 50.5, 1534.5, 2476.7, 2720.8, 3124.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyHealthGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}

void testGetMyMobileInternetGraphics() {
    double testArr[5] = { 52.5, 1600.5, 2700.7, 2800.8, 3200.8 };
    int size = sizeof(testArr) / sizeof(testArr[0]);
    double arrSum = 0;
    for (int i = 0;i < size;i++) {
        arrSum += testArr[i];
    }
    char* resultArray = getMyMobileInternetGraphics(arrSum);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
}



