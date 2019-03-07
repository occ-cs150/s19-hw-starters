/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h17.h"
// Define your functions here


//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    istringstream in("8 9 Q 4 5");
    FlexArray a;
    in >> a;
    cout << "a->" << a << endl;
    return 0;
}
