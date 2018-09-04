#include<bits/stdc++.h>
using namespace std;

int n;
int lps[1000005];
string s;

int kmp(int psize){
	int i = 1;
    int j  = 0; 
    while (i < n-1){
        if (s[j] == s[i]){
            j++;
            i++;
        }
 
        if (j == psize){
            return 1;
        }
 
        else if (i < n-1 && s[j] != s[i]){
            if (j != 0){
                j = lps[j-1];
            }
            else{
                i = i+1;
            }
        }
    }
    return 0;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	n = s.length();
	lps[0] = 0;
	int i = 1;
	int j = 0;
	while(i < n){
		if(s[i] == s[j]){
			lps[i] = j+1;
			j++;
			i++;
		}
		else{
			if(j == 0){
				lps[i] = 0;
				i++;
			}
			else{
				j = lps[j-1];
			}
		}
	}
	// for(int i = 0; i < n; i++){
	// 	cout << lps[i] << ' ';
	// }
	// cout << '\n';
	std::vector<int> p;
	p.push_back(lps[n-1]);
	int now = lps[n-1];
	while(now != 0){
		now = lps[now-1];
		p.push_back(now);
	}
	sort(p.begin(), p.end());
	int l = 0;
	int r = p.size()-1;
	while(l < r){
		int mid = (l+r)>>1;
		mid = l+r - mid;
		int size = p[mid];
		if(kmp(size) == 1){
			l = mid;
		}
		else{
			r = mid-1;
		}
	}
	int ans = p[l];
	if(p[l] == 0){
		cout << "Just a legend\n";
	}
	else{
		for(int i = 0; i < ans; i++){
			cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}