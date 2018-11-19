#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 1e5 + 5;

int A[MAXN + 5][5];
bool check_3[2][2][2], check_4[2][2][2][2], check_2[2][2];

int N, K;

bool Check_2()
{
	for(int i = 1; i <= N; i++) if(A[i][1] == 0 && A[i][2] == 0) return true;
	for(int i = 1; i <= N; i++){
		if(check_2[A[i][1] ^ 1][A[i][2] ^ 1]) return true;
		check_2[A[i][1]][A[i][2]] = true;
	}
	return false;
}

bool Check_3()
{
	for(int i = 1; i <= N; i++) if(A[i][1] == 0 && A[i][2] == 0 && A[i][3] == 0) return true;
	for(int i = 1; i <= N; i++) check_3[A[i][1]][A[i][2]][A[i][3]] = true;
	if(check_3[1][0][0] && (check_3[0][1][0] || check_3[0][0][1])) return true;
	if(check_3[0][1][0] && (check_3[1][0][0] || check_3[0][0][1])) return true;
	for(int i = 1; i <= N; i++) if(check_3[A[i][1] ^ 1][A[i][2] ^ 1][A[i][3] ^ 1]) return true;
	return false;
}

bool Check_4()
{
	for(int i = 1; i <= N; i++) if(A[i][1] == 0 && A[i][2] == 0 && A[i][3] == 0 && A[i][4] == 0) return true;
	for(int i = 1; i <= N; i++) check_4[A[i][1]][A[i][2]][A[i][3]][A[i][4]] = true;
	if(check_4[1][0][0][0] && (check_4[0][1][0][0] || check_4[0][0][1][0] || check_4[0][0][0][1])) return true;
	if(check_4[0][1][0][0] && (check_4[1][0][0][0] || check_4[0][0][1][0] || check_4[0][0][0][1])) return true;
	if(check_4[0][0][1][0] && (check_4[1][0][0][0] || check_4[0][1][0][0] || check_4[0][0][0][1])) return true;
	if(check_4[0][0][0][1] && (check_4[1][0][0][0] || check_4[0][1][0][0] || check_4[0][0][1][0])) return true;

	if(check_4[1][0][0][0] && (check_4[0][1][1][0] || check_4[0][0][1][1] || check_4[0][1][0][1])) return true;
	if(check_4[0][1][0][0] && (check_4[1][0][1][0] || check_4[1][0][0][1] || check_4[0][0][1][1])) return true;
	if(check_4[0][0][1][0] && (check_4[1][1][0][0] || check_4[1][0][0][1] || check_4[0][1][0][1])) return true;
	if(check_4[0][0][0][1] && (check_4[0][1][1][0] || check_4[1][0][1][0] || check_4[1][1][0][0])) return true;

	for(int i = 1; i <= N; i++){
		if(check_4[A[i][1] ^ 1][A[i][2] ^ 1][A[i][3] ^ 1][A[i][4] ^ 1]) return true;
	}
	return false;
}

int main()
{
	scanf("%d %d", &N, &K);
	for(int i = 1; i <= N; i++) for(int j = 1; j <= K; j++) scanf("%d", &A[i][j]);
	bool check = false;
	if(K == 1) {
		for(int i = 1; i <= N; i++) if(A[i][1] == 0) check = true;
	}
	else if(K == 2) check = Check_2();
	else if(K == 3) check = Check_3();
	else if(K == 4) check = Check_4();
	if(check) printf("YES\n");
	else printf("NO\n");
}