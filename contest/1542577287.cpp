#include <bits/stdc++.h>

#define forr(A,B,C) for(int A=(B);A<(C);A++)

using namespace std;

const int LEN = 10;
const int TLEN = 1<<LEN;


struct bistr
{
	string beg;
	string end;
	unordered_set<int> nums;
};

inline int ss(int a, int b)
{
	return (a << 16) + b;
}

inline pair<int,int> uss(int val)
{
	return pair<int,int>(val>>16, (val <<16) >> 16);
}

ostream& operator<<(ostream& out, const bistr& bs)
{
	out << "(" << bs.beg << ", " << bs.end << ", " << bs.nums.size() << ")";
	out << "\t";
	
	for (auto num : bs.nums)
	{
		cout << "(" << uss(num).first << ", " << uss(num).second << ")";
	}
	
	return out;
}


unordered_set<int> getvec(const string& s)
{
	unordered_set<int> retval;
	forr(i,0,s.length())
	{
		int num = 0;
		forr(k,0,LEN)
		{
			if (i + k >= s.length())
				break;
			num = (num << 1) + (s[i + k] - '0');
			//cout << num << " " << k+1 << endl;
			retval.insert(ss(num,k+1));
		}
	}
	return retval;
}

bistr getbistr(const string& s)
{
	bistr retval;
	retval.beg = string(s.substr(0, min<int>(s.length(),LEN)));
	retval.end = string(s.substr(max<int>(0, s.length() - LEN), s.length() - max<int>(0, s.length() - LEN)));
	
	retval.nums = getvec(s);
	
	return retval;
}

unordered_set<int> mergevecs(const unordered_set<int>&a, const unordered_set<int>& b, const unordered_set<int>& c)
{
	if (a.size() < b.size()) return mergevecs(b,a,c);
	if (a.size() < c.size()) return mergevecs(c,b,a);
	
	unordered_set<int> result = a;
	
	for (int n : b)
		result.insert(n);
	
	for (int n : c)
		result.insert(n);
	return result;
}

bistr mergebis(const bistr&a, const bistr& b)
{
	bistr retval;
	retval.beg = a.beg + b.beg.substr(0, max<int>(0, LEN - a.beg.length()));
	
	int ml = min<int>(max<int>(0, LEN - b.end.length()), a.end.length());
	retval.end = a.end.substr(a.end.length() - ml, ml) + b.end;
	
	retval.nums = mergevecs(a.nums, b.nums, getvec(a.end + b.beg));
	return retval;
}

int N;
int M;

vector<bistr> strs;

int computek(const bistr& a)
{
	int lastind = 0;
	forr(i,1,LEN+1)
	{
		bool isok = true;
		
		forr(n,0,(1<<i))
		{
			//cout << "q" << n << " " << i << " " << endl;
			if (a.nums.find(ss(n,i)) == a.nums.end())
			{
				isok = false;
				break;
			}
		}
		
		if (!isok)
			break;
		lastind = i;
	}
	return lastind;
}

int main()
{
	cin>>N;
	
	forr(i,0,N)
	{
		string s; cin>>s;
		auto bob = getbistr(s);
		//cout << bob << endl;
		strs.push_back(bob);
	}
	
	cin>>M;
	
	//cout << "KOKO" << endl;
	
	forr(i,0,M)
	{
		int a,b; cin>>a>>b;
		a--;
		b--;
		
		bistr& b1 = strs[a];
		bistr& b2 = strs[b];
		auto bob = mergebis(b1,b2);
		//cout << bob << endl;
		
		int val = computek(bob);
		cout << val << endl;
		strs.push_back(bob);
	}
	
	return 0;
}