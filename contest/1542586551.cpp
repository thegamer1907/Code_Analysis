#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <cctype>

#include <set>
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{
  string pwd;
  cin >> pwd;
  int n;
  cin >> n;
  vector<string> vs;
  string word;
  for(int i=0; i<n; i++)
    {
      cin >> word;
      vs.push_back(word);
      if( word == pwd )
	{
	  cout << "YES";
	  return 0;
	}
    }
  for(int i=0; i<vs.size(); i++)
    {
      for(int j=0; j<vs.size(); j++)
	{
	  string neww = vs[i].substr(1,1) + vs[j].substr(0,1);
	  if( neww == pwd)
	    {
	      cout << "YES";
	      return 0;
	    }
	}
    }
  cout << "NO";
  return 0;
}
