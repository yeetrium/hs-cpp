//Luis Nunez, C++ 14/15, Assignment#14

#include <iostream.h>
#include <stdlib.h>
#include <string>
#include <ctype.h>

using namespace std;

string sWord;
void Prompt();
bool Palim(string sWord);

int main()
{
      Prompt();
      do
      {
      cout<<"Please enter a word to check if it's a palindrome:"<<endl;
      getline(cin, sWord);
      Palim(sWord);
      if(Palim(sWord))
         cout<<sWord<<" is a palindrome."<<endl;
      else
         cout<<sWord<<" is NOT a palindrome."<<endl;
      }while(sWord != "quit");
      system("PAUSE");
      return 0;
}

void Prompt()
{
      cout<<"Welcome to Palindrome Scanner!"<<endl;
      cout<<"This program checks if the word you enter is a palindrome."<<endl;
      cout<<"A palindrome is a word or phrase that is read the same forwards and backwards."<<endl;
}

bool Palim(string sWord)
{
      int nFirst = 0;
      int nLast = sWord.length() - 1;
      while(sWord != "quit")
      {
      if(sWord[nFirst] != sWord[nLast])
         return false;
      }
}
