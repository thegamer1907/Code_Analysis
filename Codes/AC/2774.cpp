#include <bits/stdc++.h>
using namespace std;
string s;
int lps[1000007];
void preproc(string pat, int M, int *lps) {
  int len = 0;
  lps[0] = 0;
  int i = 1;
  while (i < M) {
    if (pat[i] == pat[len]) {
      len++;
      lps[i] = len;
      i++;
    } else {
      if (len != 0) {
        len = lps[len - 1];
      } else {
        lps[i] = 0;
        i++;
      }
    }
  }
}
int main() {
  std::cin >> s;
  preproc(s, s.size(), lps);
  if (!lps[s.size()-1]) {
    return 0*printf("Just a legend\n");
  }
  for(int i = 1; i<s.size()-1; i++){
    if(lps[i]==lps[s.size()-1]) return 0*printf("%s\n", s.substr(0,lps[s.size()-1]).c_str());
  }
  if (!lps[lps[s.size()-1]-1]) {
    return 0*printf("Just a legend\n");
  }
  for(int i = 1; i<s.size()-1; i++){
    if(lps[i]==lps[lps[s.size()-1]-1]) return 0*printf("%s\n", s.substr(0,lps[lps[s.size()-1]-1]).c_str());
  }
  return 0*printf("Just a legend\n");

  for (int i = 0; i < (int)s.size(); i++) {
    printf("%d, ", lps[i]);
  }
}
