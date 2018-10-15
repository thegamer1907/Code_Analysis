/*
###  ###    ########   ########     ###   ####       ####   ##########   ###         ###
### ###     ########   ###   ###    ###   #####     #####   ##########   ###         ###
######      ###        ###    ###   ###   ######   ######   ###    ###   ###   ###   ###
#####       ########   ###   ###    ###   ### ### ### ###   ###    ###   ###  #####  ###
######      ########   ### ###      ###   ###  #####  ###   ###    ###   ### ### ### ###
### ###     ###        ###  ###     ###   ###   ###   ###   ###    ###   ######   ######
###  ###    ########   ###   ###    ###   ###         ###   ##########   #####     #####
###   ###   ########   ###    ###   ###   ###         ###   ##########   ####       ####
*/
// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>

#define N 100010
#define ff first
#define ss second
#define pb push_back
#define ll long long
#define INF 1000000007
#define pii pair <int, int>
#define all(x) x.begin(),x.end()

using namespace std;

ll n, mx, a;
ll arr[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> arr[i], a += arr[i], mx = max(mx, arr[i]);
	cout << max(mx, (a-1)/(n-1)+1);
}