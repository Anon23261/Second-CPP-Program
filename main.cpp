/**
 * @file main.cpp
 * @brief Comprehensive demonstration of C++ variables and data types
 * @author Anon23261
 * @date 2024-12-17
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

// Using declarations (scope limited to this file)
using std::cout;
using std::endl;
using std::string;

// Function declarations
void demonstrateIntegerTypes();
void demonstrateFloatingPointTypes();
void demonstrateCharAndBool();
void demonstrateConstants();
void demonstrateTypeConversion();

int main() {
    // Set console output formatting
    cout << std::fixed << std::setprecision(2);
    
    cout << "=== C++ Variables and Data Types Tutorial ===\n" << endl;

    // Call demonstration functions
    demonstrateIntegerTypes();
    demonstrateFloatingPointTypes();
    demonstrateCharAndBool();
    demonstrateConstants();
    demonstrateTypeConversion();

    return 0;
}

void demonstrateIntegerTypes() {
    cout << "1. INTEGER TYPES\n";
    cout << "----------------\n";

    // Signed integers
    int regularInt = 42;
    short shortInt = 32767;
    long longInt = 2147483647L;
    long long longLongInt = 9223372036854775807LL;

    cout << "Regular int: " << regularInt 
         << " (Size: " << sizeof(regularInt) << " bytes)\n";
    cout << "Short int: " << shortInt 
         << " (Size: " << sizeof(shortInt) << " bytes)\n";
    cout << "Long int: " << longInt 
         << " (Size: " << sizeof(longInt) << " bytes)\n";
    cout << "Long Long int: " << longLongInt 
         << " (Size: " << sizeof(longLongInt) << " bytes)\n\n";
}

void demonstrateFloatingPointTypes() {
    cout << "2. FLOATING POINT TYPES\n";
    cout << "----------------------\n";

    float floatNum = 3.14159f;
    double doubleNum = 3.14159265359;
    long double longDoubleNum = 3.14159265359L;

    cout << "Float: " << floatNum 
         << " (Size: " << sizeof(floatNum) << " bytes)\n";
    cout << "Double: " << doubleNum 
         << " (Size: " << sizeof(doubleNum) << " bytes)\n";
    cout << "Long Double: " << longDoubleNum 
         << " (Size: " << sizeof(longDoubleNum) << " bytes)\n\n";
}

void demonstrateCharAndBool() {
    cout << "3. CHARACTER AND BOOLEAN TYPES\n";
    cout << "-----------------------------\n";

    char singleChar = 'A';
    char16_t unicodeChar = u'★';
    bool isTrue = true;
    bool isFalse = false;

    cout << "Char: " << singleChar 
         << " (ASCII: " << static_cast<int>(singleChar) << ")\n";
    cout << "Boolean true: " << std::boolalpha << isTrue << "\n";
    cout << "Boolean false: " << isFalse << "\n\n";
}

void demonstrateConstants() {
    cout << "4. CONSTANTS AND LITERALS\n";
    cout << "-------------------------\n";

    // Constants
    const int MAX_VALUE = 100;
    constexpr double PI = 3.14159265359;
    
    // String literals
    const string MESSAGE = "Hello, World!";
    
    cout << "Constant (MAX_VALUE): " << MAX_VALUE << "\n";
    cout << "Constexpr (PI): " << PI << "\n";
    cout << "String literal: " << MESSAGE << "\n\n";
}

void demonstrateTypeConversion() {
    cout << "5. TYPE CONVERSION\n";
    cout << "------------------\n";

    // Implicit conversion
    int intNum = 42;
    double doubleNum = intNum;    // Implicit conversion from int to double

    // Explicit conversion
    float floatNum = 3.99f;
    int roundedNum = static_cast<int>(floatNum);

    cout << "Implicit int to double: " << doubleNum << "\n";
    cout << "Explicit float to int: " << roundedNum 
         << " (Original value: " << floatNum << ")\n\n";
}
