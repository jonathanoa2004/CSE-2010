#include <iostream>
using namespace std;

/** select
* @brief output the statements based on func_type
* func_type : output
* "sum" : "The sum is "
* "division" : "The quotient is "
* "comparison" : "The first value being greater than the second value is "
* All other phrases: "Invalid function type\n"
* @param func_type : (string)
* @return string
*/
string select(string func_type) {
    string out;
    if (func_type == "sum") {
        out = "The sum is ";
    } else if (func_type == "division") {
        out = "The quotient is ";
    } else if (func_type == "comparison") {
        out = "The first value being greater than the second value is ";
    } else {
        out = "Invalid function type\n";
    }
    return out;
}

/** isGreaterThan
* @brief returns whether x is greater than y
*
* @param x : (double)
* @param y : (int)
* @return true : x is greater than y
* @return false : x is less than or equal to y
*/
bool isGreaterThan(double x, int y) {
    return x > y;
}


/** sumOfThree
* @brief returns the sum of x, y, and z
*
* @param x : (int)
* @param y : (int)
* @param z : (int)
* @return int
*/
int sumOfThree(int x, int y, int z) {
    return x + y + z;
}

/** sumOfThree
 * @brief returns the sum of x, y, and z
 * 
 * @param x : (int)
 * @param y : (int)
 * @param z : (int)
 * @return int
*/
int sumOfThree(int x, int y, int z) {
    return x + y + z;
}

/** division
 * @brief returns x / y
 * 
 * @param x : (double)
 * @param y : (double)
 * @return double
*/
double division(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Division by zero error" << endl;
        return 0; // or std::numeric_limits<double>::infinity() to indicate error
    }
}

/** isGreaterThan
 * @brief returns whether x is greater than y
 * 
 * @param x :(double)
 * @param y : (int)
 * @return true : x is greater than y
 * @return false : x is less than or equal to y
*/
bool isGreaterThan(double x, int y) {
    return x > y;
}

/** select
 * @brief output the statements based on func_type
 * func_type : output
 * "sum"            : "The sum is "
 * "division"       : "The quotient is "
 * "comparison"     : "The first value being greater than the second value is "
 *  All other phrases: "Invalid function type"
 * 
 * @param func_type : (string)
 * @return string
*/
string select(const string& func_type) {
    if (func_type == "sum") {
        return "The sum is ";
    } else if (func_type == "division") {
        return "The quotient is ";
    } else if (func_type == "comparison") {
        return "The first value being greater than the second value is ";
    } else {
        return "Invalid function type\n";
    }
}
