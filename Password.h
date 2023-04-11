#ifndef PRACTICE_H
#define PRACTICE_H

#include <algorithm>
#include <climits>
#include <stdexcept>
#include <string>

using std::string;

class Password
{
private:
public:
  /*
  The function receives a string counts how many times the same character
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
  */
  int count_leading_characters (string);

  /*
returns whether the phrase has both at least one upper-case letter and
at least one lower-case letter
*/
  bool has_mixed_case (string);

protected:
  static void check_is_ascii (const string &str);
};
#endif
