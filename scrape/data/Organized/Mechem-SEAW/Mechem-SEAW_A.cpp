// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
#define read(x) ll x; cin >> x
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb(x) push_back(x)
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

typedef long long ll;

using namespace std;

int test()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	multiset<int> m;
	read(n);
	int tmp;
	ll sum = 0;
	bool th = false;
	int tw = 0;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		sum += tmp;
		if (m.count(tmp) == 0) {
			m.insert(tmp);
			if (m.count(tmp + 1) >= 2) {
				flag = true;
				cout << "cslnb";
				return 0;
			}
		}
		else {
			m.insert(tmp);
			if (m.count(tmp) > 2) {
				th = true;
				cout << "cslnb";
				return 0;
			}
			if (m.count(tmp) == 2) {
				tw++;
				if (m.count(tmp - 1)) {
					flag = true;
					cout << "cslnb";
					return 0;
				}
			}
		}
	}
	if (th || tw >= 2 || flag || m.count(0) >= 2 || !sum) {
		cout << "cslnb";
		return 0;
	}
	sum -= n * (n - 1) / 2;
	if (sum % 2) {
		cout << "sjfnb";
	}
	else {
		cout << "cslnb";
	}
	return 0;
}

//the following 

/*public*/ static int solve(int tmp[], int a, int b, int n)
{
	int cnt = 0;
	int div = tmp[b] - tmp[a]; int now = 2; for
		(int i = b + 1; i < n; i++)
	{
		if (tmp[i] == tmp[a] + div * now) {
			cnt++,
				now++;
		}
	}
	return cnt;
}
/*public*/ static int search(int num, int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (b[i] == num)
		{
			/*System.out.println(i+1);*/i + 1;
			return 0;
		}
	}
	return 1;
}int donot() { return 0; }int hack() { return 1; }string me() {
	const char* s = "do not hack me";
	return s;
}class havenoidea {
	int ameaninglessnum = 49935;
	bool iamanaduit = 1;
public:
	int iwillsolvefiveproblems(int x)
	{
		return x;
	}
}; int main() {
	if (hack())
		donot();
	int tmp[6] = { 1,1,4,5,1,4 };
	solve(tmp, search(114514, tmp, 6), 1, 6);
	int a, b, c, d;
	havenoidea fuck; fuck.iwillsolvefiveproblems(hack());
	test(); if (me() == "do not fack me")
		if (me() == "do not hack me")hack() == donot(); return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件