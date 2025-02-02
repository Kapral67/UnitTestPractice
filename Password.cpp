#include "Password.h"

void
Password::check_is_ascii (const string &password)
{
  auto is_ascii = [] (const unsigned char &c) { return c <= CHAR_MAX; };
  if (!std::all_of (password.begin (), password.end (), is_ascii))
    throw std::invalid_argument ("Password contains non-ASCII characters.");
}

/*
  The function receives a string counts how many times the same character
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int
Password::count_leading_characters (string phrase)
{
  if (phrase.empty ())
    return 0;

  Password::check_is_ascii (phrase);

  int repetition = 1;
  int index = 0;

  for (; index < phrase.length () - 1 && phrase[index] == phrase[index + 1];
       ++repetition, ++index)
    ;

  return repetition;
}
