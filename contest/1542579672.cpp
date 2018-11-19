#pragma comment(linker, "/STACK:108777216")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <utility>
#include <algorithm>
#include <ctime>
using namespace std;

int const MAX_N = 256 * 1024;
int const INT_INF = 1000000000;
long long const LL_INF = 1000000000000000000LL;

char const UNKNOWN_SYMBOL = '~';   // this symbol should not meet in our strings
int const MAX_AL = 2;   // maximal count of alphabet symbols (UNKNOWN_SYMBOL will be on "MAX_AL" position, other symbols - on [0...MAX_AL-1])

inline int get_AL_index_of_char(char ch) {
    if (ch == UNKNOWN_SYMBOL)
        return MAX_AL;
    return (int) (ch - '0');
}

inline char get_AL_char_by_index(int index) {
    if (index >= MAX_AL)
        return UNKNOWN_SYMBOL;
    return (char) (index + '0');
}

//------------------------------------------------ Strings: prefix function -----------------------------------------------------
/*                    Time: O(N)
	                    Memory (additional): O(1)                                                                                */

class Prefix_Function {
	public:
		void calculate_prefix_function(char const * const st, int * pf) const {
            // For example: st = "abacabaeabacabaabbaa"
            //              pf =  00101230123456712011   (maximal own suffix length of substring [0...i], which is a prefix too)

            int N = (int) strlen(st);
            if (N <= 0)
                return;

			int t = 0;
			pf[0] = 0;
			for (int i = 1; i < N; i++) {
				while (t && st[i] != st[t]) t = pf[t-1];
				t += (st[i] == st[t]);
				pf[i] = t;
			}
		}

		void calculate_prefix_function_from_Z_function(int N, int const * const z, int * pf) const {   // N - length of arrays
			for (int i = 0; i < N; i++)
				pf[i] = 0;

			for (int i = 1; i < N; i++)
				if (z[i])
					for (int j = z[i] - 1; j >= 0 && !(pf[i+j]); j--)
						pf[i+j] = j+1;
		}
};
//-------------------------------------------------------------------------------------------------------------------------------

//----------------------------------- Strings: find all entries of one string to another ----------------------------------------
/*                    Time: O(N + M), where N and M - length of strings
	                    Memory (additional): O(N + M)                                                                            */

class String_Entries_Finder {
    private:
        Prefix_Function pf_clc;

    public:
        void find_all_entries(char const * const st, char const * const to_find, vector<int> & entries) const {
            // returned 0-based positions of entries

            entries.clear();

            int n = (int) strlen(st);
            int m = (int) strlen(to_find);

            if (m > n)
                return;
            if (n <= 0 || m <= 0)
                return;

            if (m == n) {
                if (memcmp(st,to_find,n) != 0)
                    return;
                entries.push_back(0);   // 0-based positions
                return;
            }

            char * t = new char [m + 1 + n + 1];
            int * pf = new int [m + 1 + n + 1];

            for (int i = 0; i < m; i++) t[i] = to_find[i];
            t[m] = UNKNOWN_SYMBOL;
            for (int i = 0; i < n; i++) t[m+1+i] = st[i];
            t[m+1+n] = 0;

            pf_clc.calculate_prefix_function(t, pf);

            for (int i = 2*m; i < m+n+1; i++)
                if (pf[i] == m)
                    entries.push_back(i-m*2);   // 0-based positions

            delete [] pf;
            delete [] t;
        }
} QQ;
//-------------------------------------------------------------------------------------------------------------------------------

char st[1024];
string s[1024];
int n,q, par[1024][2];
int ans[1024];
long long all_lens[1024];

map<pair<int, long long>, int> ms_en, ms_bg, ms_glob;

long long calc_st_code(char const * const st) {
	long long st_code = 0LL;
	for (int i=0; st[i]; i++) st_code = st_code*3LL + (st[i]-'0'+1);
	return st_code;
}

vector<int> our_entr;

int find_bg(int x, char const * const st, int len, long long st_code);
int find_end(int x, char const * const st, int len, long long st_code);

int find_substr(int x, char const * const st, int len, long long st_code) {
	if (all_lens[x] < len)
		return 0;

	if (x < n) {
		our_entr.clear();
		QQ.find_all_entries(s[x].c_str(), st, our_entr);
		return !our_entr.empty();
	}

	auto iter = ms_glob.find(make_pair(x, st_code));
	if (iter != ms_glob.end())
		return iter->second;

	int a = par[x][0];
	int b = par[x][1];

	int res = find_substr(a, st, len, st_code);
	if (res)
		return ms_glob[make_pair(x, st_code)] = 1;

	res = find_substr(b, st, len, st_code);
	if (res)
		return ms_glob[make_pair(x, st_code)] = 1;

	string bg = "", en = "";
	for (int j=0; j<len-1; j++) {
		bg += st[j];
		en = "";
		for (int ww=j+1; ww<len; ww++) en += st[ww];

		if (find_end(a, bg.c_str(), bg.length(), calc_st_code(bg.c_str())) &&
			find_bg(b, en.c_str(), en.length(), calc_st_code(en.c_str())))
				return ms_glob[make_pair(x, st_code)] = 1;
	}

	return ms_glob[make_pair(x, st_code)] = 0;
}

int find_end(int x, char const * const st, int len, long long st_code) {
	if (x < n) {
		if ((int) s[x].length() < len)
			return 0;
		int cnt = 0;
		for (int i=(int) s[x].length() - len; i<(int) s[x].length(); i++)
			if (s[x][i] != st[cnt++])
				return 0;
		return 1;
	}

	auto iter = ms_en.find(make_pair(x, st_code));
	if (iter != ms_en.end())
		return iter->second;

	int a = par[x][0];
	int b = par[x][1];

	if (all_lens[b] >= len)
		return ms_en[make_pair(x, st_code)] = find_end(b, st, len, st_code);

	string lf = "", rt = "";
	for (int i=0; i<len-all_lens[b]; i++) lf += st[i];
	for (int i=(int) (len-all_lens[b]); i<len; i++) rt += st[i];

	return ms_en[make_pair(x, st_code)] = (find_end(b, rt.c_str(), rt.length(), calc_st_code(rt.c_str())) &&
		                                   find_end(a, lf.c_str(), lf.length(), calc_st_code(lf.c_str())));
}

int find_bg(int x, char const * const st, int len, long long st_code) {
	if (x < n) {
		if ((int) s[x].length() < len)
			return 0;
		for (int i=0; i<len; i++)
			if (s[x][i] != st[i])
				return 0;
		return 1;
	}

	auto iter = ms_bg.find(make_pair(x, st_code));
	if (iter != ms_bg.end())
		return iter->second;

	int a = par[x][0];
	int b = par[x][1];

	if (all_lens[a] >= len)
		return ms_bg[make_pair(x, st_code)] = find_bg(a, st, len, st_code);

	string lf = "", rt = "";
	for (int i=0; i<all_lens[a]; i++) lf += st[i];
	for (int i=(int) all_lens[a]; i<len; i++) rt += st[i];

	return ms_bg[make_pair(x, st_code)] = (find_bg(a, lf.c_str(), lf.length(), calc_st_code(lf.c_str())) &&
		                                   find_bg(b, rt.c_str(), rt.length(), calc_st_code(rt.c_str())));
}

int main() {
#ifdef __abra__ca__dabra__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	gets(st);
	sscanf(st,"%d",&n);
	for (int i=0; i<n; i++) {
		gets(st);
		s[i] = st;
	}
	gets(st);
	sscanf(st,"%d",&q);
	
	int ind = n;
	for (int i=0; i<n; i++) par[i][0] = par[i][1] = -1;
	for (int i=0; i<n; i++) all_lens[i] = s[i].length();

	for (int j=0; j<q; j++) {
		gets(st);
		int x,y;
		sscanf(st,"%d%d",&x,&y);
		x--; y--;
		par[ind][0] = x;
		par[ind][1] = y;
		all_lens[ind] = min(LL_INF, all_lens[x] + all_lens[y]);
		ind++;
	}

	char buf[1024];
	for (int i=0; i<1024; i++) buf[i] = 0;
	vector<int> ent;

	for (int i=0; i<n; i++)
		for (int len = 1; ; len++) {
			int Ok = 1;
			for (int code = 0; code < (1<<len); code++) {
				for (int j=0; j<len; j++) buf[j] = '0' + ((code>>j)&1);
				buf[len] = 0;
				QQ.find_all_entries(s[i].c_str(), buf, ent);
				if (ent.empty()) {
					Ok = 0;
					break;
				}
			}
			if (!Ok) {
				ans[i] = len-1;
				break;
			}
		}

	for (int i=n; i<ind; i++) {
		ans[i] = max(ans[par[i][0]],ans[par[i][1]]);
		for (int len = ans[i] + 1; ; len++) {
			int Ok = 1;
			for (int code = 0; code < (1<<len); code++) {
				for (int j=0; j<len; j++) buf[j] = '0' + ((code>>j)&1);
				buf[len] = 0;

				int A = find_substr(par[i][0], buf, len, calc_st_code(buf));
				if (A) continue;

				A = find_substr(par[i][1], buf, len, calc_st_code(buf));
				if (A) continue;

				string bg = "", en = "";
				for (int j=0; j<len-1; j++) {
					bg += buf[j];
					en = "";
					for (int ww=j+1; ww<len; ww++) en += buf[ww];

					if (find_end(par[i][0], bg.c_str(), bg.length(), calc_st_code(bg.c_str())) &&
						find_bg(par[i][1], en.c_str(), en.length(), calc_st_code(en.c_str()))) {
							A = 1;
							break;
					}
				}
				if (A) continue;

				Ok = 0;
				break;
			}
			if (!Ok) {
				ans[i] = len-1;
				break;
			}
		}

		printf("%d\n",ans[i]);
	}
	return 0;
}