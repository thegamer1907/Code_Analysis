#include<bits/stdc++.h>
using namespace std;

int* lps(string& kmp_a)
{
	int kmp_len = 0;
	
	int kmp_m = kmp_a.size();
	
	int* kmp_lps = new int[kmp_m];
	
	kmp_lps[0]=0;
	
	//cout<<kmp_a<<endl;
	//cout<<kmp_m<<endl;
	
	int kmp_i = 1;
	while(kmp_i < kmp_m)
	{
	//	cout<<kmp_i<<kmp_len<<endl;
		if(kmp_a[kmp_i] == kmp_a[kmp_len])
		{
			kmp_len++;
			kmp_lps[kmp_i] = kmp_len;
			kmp_i++;
		}
		else
		{
			if(kmp_len!=0)
			{
				kmp_len = kmp_lps[kmp_len-1];
			}
			else
			{
				kmp_lps[kmp_i]=0;
				kmp_i++;
			}
		}
	}
	//cout<<endl;
	return kmp_lps;
}

void KMP(string& kmp_S, string& kmp_T, vector<int>& kmp_matches)
{
	int* kmp_lps = lps(kmp_T);
	
	cout<<endl;
	
	int i=0,j=0;
	int N = kmp_S.size();
	int M = kmp_T.size();
	while (i < N)
    	{
		if (kmp_T[j] == kmp_S[i])
		{
            		j++;
            		i++;
		}
 
	            if (j == M)
		{
			kmp_matches.push_back(i-j);
            		j = kmp_lps[j-1];
		}
 
		// mismatch after j matches
		else if (i < N && kmp_T[j] != kmp_S[i])
		{
            		// Do not match lps[0..lps[j-1]] characters,
            		// they will match anyway
            		if (j != 0)
			            j = kmp_lps[j-1];
            		else
            			i = i+1;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;

	int* b = lps(s);

	int n = s.length();
	int l = n;
	while(true){
		l = b[l-1];
		if(l==0){
			cout<<"Just a legend";
			return 0;
		}
		//for(int i=0;i<n;i++)
		//	cout<<s[i]<<" "<<b[i]<<endl;
		for(int i=0;i<n-1;i++){
			if(l==b[i]){
				cout<<s.substr(0,l);
				return 0;
			}
		}
	}
	return 0;
}