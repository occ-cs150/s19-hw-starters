/**
    @file h11.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H11_H_
#define H11_H_
#include <vector>
#include <string>
/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
std::vector<std::string> fileToWords(const std::string& filename);


struct WORD
{
    std::string word;
    std::vector<long long> positions;
};

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
std::vector<WORD> spellCheck(std::istream& in,
                    const std::vector<std::string>& dictionary,
                    const std::vector<std::string>& excluded);

#endif
