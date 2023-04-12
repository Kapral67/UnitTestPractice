#ifndef PRACTICE_H
#define PRACTICE_H

#include <algorithm>
#include <climits>
#include <stdexcept>
#include <string>

using std::string;

class Password
{
public:
  /*
  The function receives a string counts how many times the same character
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
  */
  int count_leading_characters (string);

protected:
  static void check_is_ascii (const string &str);
};
#endif
