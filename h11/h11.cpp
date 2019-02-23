/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID


#include "h11.h"

// Complete these two functions
vector<string> fileToWords(const string& filename)
{
    vector<string> result;
    // . . .
    return result;
}


/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
vector<WORD> spellCheck(istream& in,
                        const vector<string>& dictionary,
                        const vector<string>& excluded)
{
    // 1. Create the empty results vector
    vector<WORD> results
    
    // 2. Read through the input stream until end of file (while in)
        // 3. Consume any white space, so we are at the beginning of a word
        // 4. Find current position (in.tellg()->cast to unsigned long)
        // 5. If tellg() returns -1 then at end of file so exit the loop
        // 6. Read next word, convert to lowercase, remove punctuation

        // 7. Search the list of misspelled words (results vector<WORD>)
        //    Found it? Append position to WORD where found, go to top of loop

        // 	8.  Not found? Search the list of excluded words
        //      Found it? Ignore and read the next word (top of loop)

        //  9. Not found? Search the dictionary
        //  -- Found it? Not misspelled. Ignore and read the next word
        // 	-- No found in the dictionary? The word is misspelled
        //      + Add a new entry (WORD) to the results
        //        containing the word and position where found

    }
    // 10. After loop is over, return the vector
    //     containing the misspelled words and their positions
    return result;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    auto v = fileToWords("excluded.txt");
    cout << "Excluded words:" << endl;
    for (auto e : v) cout << " -" << e << endl;
    return 0;
}
