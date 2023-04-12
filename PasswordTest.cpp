/**
 * Unit Tests for Password class
 **/

#include "Password.h"
#include <gtest/gtest.h>

class PracticeTest : public ::testing::Test
{
protected:
  PracticeTest () {}          // constructor runs before each test
  virtual ~PracticeTest () {} // destructor cleans up after tests
  virtual void
  SetUp ()
  {
  } // sets up before each test (after constructor)
  virtual void
  TearDown ()
  {
  } // clean up after each test, (before destructor)
};

TEST (PasswordTest, smoke_test) { ASSERT_TRUE (1 == 1); }

TEST (PasswordTest, empty_string_password)
{
  Password my_password;
  ASSERT_EQ (0, my_password.count_leading_characters (""));
}

TEST (PasswordTest, single_letter_password)
{
  Password my_password;
  int actual = my_password.count_leading_characters ("a");
  ASSERT_EQ (1, actual);
}

TEST (PasswordTest, multi_char_password)
{
  Password my_password;
  ASSERT_EQ (3, my_password.count_leading_characters ("aaabb"));
}

TEST (PasswordTest, capital_letter_paritions_password)
{
  Password my_password;
  ASSERT_EQ (2, my_password.count_leading_characters ("aaAabb"));
}

TEST (PasswordTest, whitespace_password)
{
  Password my_password;
  ASSERT_EQ (3, my_password.count_leading_characters ("\n\n\nab$\r\n"));
}

TEST (PasswordTest, unicode_password)
{
  Password my_password;
  EXPECT_THROW (my_password.count_leading_characters ("ßßßc"),
                std::invalid_argument);
}
