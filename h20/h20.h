/**
    @file h20.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H20_H_
#define H20_H_
#include <string>
/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const std::string& s, const std::string& t);

/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
std::string stringClean(const std::string& str);

/**
    Compute recursively the number of times that sub appears inside
    str, without the substrings overlapping.

    @param str the string to search through.
    @param sub the string to look for.
    @return number of times that sub appears in str (without overlap).

    Here are some examples:
        subCount("catcowcat", "cat") returns 2
        subCount("catcowcat", "cow") returns 1
        subCount("catcowcat", "dog") returns 0

*/
int subCount(const std::string& str, const std::string& sub);

#endif
