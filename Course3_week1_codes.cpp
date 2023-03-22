
Exec--3

bool FindTerm(string x, vector<string>& y) {
  bool b = false;
  for (auto a : y) {
    if (a == x) {
      b = true;
    }
  }
  return b;
}

or

bool FindTerm(string s, vector<string> v) {
  for (const string& str : v) {
    if (str.find(s) != string::npos) {
      return true;
    }
  }
  return false;
}

or 

bool FindTerm(string s, vector<string> v) {
  for (int i = 0; i < v.size(); i++) {
    bool found = true;
    for (int j = 0; j < s.size(); j++) {
      if (v[i].size() - j < s.size() || v[i][j] != s[0]) {
        found = false;
        break;
      }
      for (int k = 1; k < s.size(); k++) {
        if (v[i][j+k] != s[k]) {
          found = false;
          break;
        }
      }
      if (found) {
        return true;
      }
    }
  }
  return false;
}



==========================================================

Exer ---1

double GetAvg(double a, double b){
  double result = (a + b) / 2;
  return result;
}

or 


double GetAvg(double x, double y) {
  return (x + y) / 2;
}


====================================================

Exer---2

void GetOddsEvens(string x, vector<int>& y) {
  if (x == "true") {
    for (auto a1 : y) {
      if (a1 % 2 == 0) {
        cout << a1 << endl;
      }
    }
  }
  if (x == "false") {
    for (auto a2 : y) {
      if (a2 % 2 == 1) {
        cout << a2 << endl;
      }
    }
  }
}


or 

void GetOddsEvens(string x, vector<int>& y) {
  if (x == "true") {
    for (auto a1 : y) {
      if (a1 % 2 == 0) {
        cout << a1 << endl;
      }
    }
  }
  if (x == "false") {
    for (auto a2 : y) {
      if (a2 % 2 == 1) {
        cout << a2 << endl;
      }
    }
  }
}


=============================================

Exer---4

bool IsPalindrome(const string& str) {
  int len = str.length();
  for (int i = 0; i < len/2; ++i) {
    if (str[i] != str[len-i-1]) {
      return false;
    }
  }
  return true;
}

or

bool IsPalindrome(string x) {
  bool palindrome = false;
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  if (x == y) {
    palindrome = true;
  }
  return palindrome;
}


=================================


exer --5

#include <iostream>
#include <vector>
using namespace std;

string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}

//add code below this line

bool IsPalindrome(const string& str) {
  return str == Reverse(str);
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}

or

bool IsPalindrome(string x) {
  bool palindrome = false;
  if (x == (Reverse(x))) {
    palindrome = true;
  }
  return palindrome;
}


========================================





