#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 126
    Task : B
*/

//amortized O(N), swag
vi prefix(string s){
	vi p(s.size());
	for(int i = 1, len = 0; i < s.size(); i++)
    	if(s[i] == s[len])
    		p[i] = ++len;
    	else if(len != 0)
    		len = p[len - 1], i--;
    	else
    		p[i] = 0;
    return move(p);
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    //we need to compute prefix that is also suffix - how the heck does this work?\
    	let's say we don't want to learn KMP /yet/\
    	oh it appears i learned it :)

    string s;
    cin >> s;
    vi p = prefix(s);
    //we have to find prefix whish is also suffix\
    	so at most prefix[s.size()-1]
    int best = p.back();
    
    //for second condition refer to next comment
    if(best == 0) return cout << "Just a legend", 0;

    int ans = 0;
    for(int i = 1; i < p.size() - 1; i++)
    	if(p[i] == best & p[i] > p[ans])
    		ans = i;

    if(ans != 0){
	    for(int i = 0; i < p[ans]; i++)
	    	cout << s[ans+i-p[ans]+1];
    	return 0;
    }

	//we need to look for a shorter string - that actually has to\
		be suffix of whole string. we know that best of whole string is\
		of length p[n], as it's also a prefix we can think of it like\
		the prefix on length p[n]. we know this substring is not in other\
		places. best we can find is it's own pref/suff comb\
		not easy to prove but easy to see that its best pref/suff is pref\
		suff of whole array. also easy to see that we have it in the string\
		hardest part is proving that it is maximal\
		but can be easily seen as you can't find another suffix of S\
		that is also a prefix and is not the suff/pref of the prefix of length\
		p[n]. i hate strings.
    if(p[p.back() - 1 ] == 0) return cout << "Just a legend", 0;
	if(ans == 0 && p[p.back()-1] != 0) //no need to look for it
		for(int i = 0; i < p[p.back()-1]; i++)
			cout << s[i];
}