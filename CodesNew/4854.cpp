#include <bits/stdc++.h>
using namespace std;

#define FORu(i, start, n) for (ll i = start; i < (ll)(n); i++)
#define FORd(i, start, n) for (ll i = start; i > (ll)(n); i--)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

string t, p, curr;
// Returns true if s1 is a subsequence of s2
// m is length of s1 and n is length of s2
bool seqCheck(string s1, string s2, int m, int n){
    int j = 0; // For index of s1 (or subsequence)
 
   // Traverse s2 and s1, and compare current character 
   // of s2 with first unmatched char of s1, if matched 
   // then move ahead in str1
   for (int i=0; i < n && j < m; i++)
       if( s1[j] == s2[i] )
         j++;
 
   // If all characters of str1 were found in str2
   return ( j == m );
}

//==============================================================================

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a;
    cin >> t;
    cin >> p;
    vector<int> seq;
    FORu(i,0,t.length()){
      cin >> a;
      seq.push_back(a);
    }
    //binary search answer
    int left = 0; int right = seq.size();
    while(left < right){
      int mid = left + (right - left + 1)/2;
      curr = t;
      //change to 0 each index until mid
      FORu(i,0,mid){
        curr[seq[i]-1] = '0';
      }
      //check if subsequence, if yes, fix pointer
      if( seqCheck(p,curr,p.length(),curr.length()) ){
        left = mid;
      }else{//if not, fix pointer
        right = mid - 1;
      }
    }
    cout << left << endl;
    return 0;
}