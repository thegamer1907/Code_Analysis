#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int abss(int i){
  return i > 0 ? i : -1 * i;
}

long long minn(long long m, long long k) {
  return m < k ? m : k;
}

int maxx(int m, int k) {
  return m < k ? k : m;
}

long long getNod(long k, long j) {
  long long mx = maxx(k, j);
  long long mn = minn(k, j);

  long long res = mx % mn;

  if (res == 0) return mn;
  else return getNod(res, mn);
}

string to_s(int i) {
  if (i == 0) return "0";
  string res = "";

  while(i != 0){
    char ch = ((i % 10) + '0');
    res = ch + res;
    i /= 10;
  }
  return res;
}

char toUpcase(char letter) {
  if (letter <= 'z' && letter >= 'a') {
    letter = letter - ('a' - 'A');
  }
  return letter;
}

char toLowercase(char letter) {
  if (letter <= 'Z' && letter >= 'A') {
    letter = letter + ('a' - 'A');
  }
  return letter;
}

bool is_vowel(char letter) {
  letter = toUpcase(letter);
  if (letter <= 'z' && letter >= 'a') {
    letter = letter - ('a' - 'A');
  }
  return letter == 'A' || letter == 'O' || letter == 'Y' || letter == 'E' || letter == 'U' || letter == 'I';
}

int to_num(char ch) {
  return (ch - '0');
}

int main()
{
  int n, t;

  int a = 0, b = 0, c = 0;

  vector<int> v;
  cin>>n >>t;

  string s;
  cin >>s;

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (s[j] == 'B' && s[j + 1] == 'G') {
        swap(s[j], s[j + 1]);
        j++;
      }
    }
  }

  cout <<s;

  return 0;
}
