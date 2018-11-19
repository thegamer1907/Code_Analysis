#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<climits>
#include<bitset>
#include<vector>

using namespace std;

static string password, temp;
static int n;
static map<char, int> front, tail;
static set<string> s;


int main()
{
	while (cin >> password)
	{
		scanf("%d", &n);
		front.clear();
		tail.clear();
		s.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			front[temp[0]]++;
			tail[temp[1]]++;
			s.insert(temp);
		}
		if (front.size() >= 1 && tail.size() >= 1 && tail[password[0]] >= 1 && front[password[1]] >= 1)
		{
			printf("YES\n");
		}
		else if (front.size() == 1 && tail.size() == 1 && tail[password[0]] == 1 & front[password[1]] == 1)
		{
			printf("YES\n");
		}
		else if (s.count(password) > 0)
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}

	return 0;
}