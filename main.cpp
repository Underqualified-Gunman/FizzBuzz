//
// started november 11th 2021
// created by liam turnbull
// Input_Validation_Extended by drT
// created for a class quiz for Tyson mcmillan at tarrant county community college
// this assigment was to create a program that would output 1=100 but replace every number that begins is divisble by 3 or 5 with fizz or buzz repsecitvly and by fizzbuzz if divisible by both.
// it was a test to figure out how we each approach different solutions to the same problem
// learned how to better use the modulus operation on numbers and got familiar with it.
#include <iostream>
#include <string>
using namespace std;


// credit to https://www.sanfoundry.com/cpp-program-check-if-first-divisible-by-second/ for there reference on how to use the modulus operator
string divide_5(int i);
string divide_3(int i);

int main()
{
  string answer = ""; 

  for(int i=1; i < 100; i++)
  { 
    answer = "";
    answer = divide_3(i);
    answer = answer + divide_5(i);
    if(answer == "")
    {
      cout << i << endl;
    }
    else if(answer != "")
    {
      cout << answer << endl;
    }
    else
    {
      cout << "what?";
    }
  }

  cout << "test";
  return 0;
}

string divide_5(int p)
{

  if(p % 5 == 0)
  {
    return "Buzz"; // returns true on succesful
  }
  return "";
}

string divide_3(int p)
{

  if(p % 3 == 0)
  {
    return "Fizz"; // returns true on succesful
  }
  return "";
}