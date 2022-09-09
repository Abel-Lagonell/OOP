  #include <iostream>
  #include <ctype.h>
  #include <cstring>
  #include <string>
  #include <bits/stdc++.h>
  using namespace std;

bool isPalindrome(const char * const s)
{
   if (strlen(s) <= 1) // Base case
     return true;
   else if (s[0] != s[strlen(s) - 1]) // Base case
     return false;
   else
     return isPalindrome(s.substr( 1, strlen(s) - 2));
}

int main(){
    char s[10] = "racecar";
    (isPalindrome(s))? puts("true"):puts("false");
    return 0; 
}

