#include<bits\stdc++.h>
using namespace std;
struct s
{
	string a;
	bool operator <(const s& a1)const{
		if (a1.a[0] != a[0])
			return a1.a[0]>a[0];
		else//notice
			return a1.a[1] > a[1];
	}
};
struct s A[3];
int flag = 2;

void judge()
{
	if (A[1].a[0] == A[2].a[0] - 1 || A[1].a[0] == A[0].a[0] + 1){//sequential
		if (A[0].a[1] == A[2].a[1] && A[0].a[0] == A[2].a[0] - 2)//notice
			flag = 1;
		if ((A[1].a[1] == A[2].a[1] && A[1].a[0] == A[2].a[0] - 1) || (A[1].a[1] == A[0].a[1] && A[1].a[0] == A[0].a[0] + 1)){
			flag = 1;
			if (A[1].a[0] == A[2].a[0] - 1 && A[1].a[0] == A[0].a[0] + 1){
				if (A[1].a[1] == A[2].a[1] && A[1].a[1] == A[0].a[1]){
					flag = 0;
					return;
				}
			}
		}
	}
	if (A[1].a[0] == A[2].a[0] - 2 || A[1].a[0] == A[0].a[0] + 2){//sequential
		if ((A[1].a[1] == A[2].a[1] && A[1].a[0] == A[2].a[0] - 2) || (A[1].a[1] == A[0].a[1] && A[1].a[0] == A[0].a[0] + 2)){
			flag = 1;
		}
	}
	if (A[1].a[0] == A[2].a[0] || A[1].a[0] == A[0].a[0]){//indeitial
		if ((A[1].a[1] == A[2].a[1] && A[1].a[0] == A[2].a[0]) || (A[1].a[1] == A[0].a[1] && A[1].a[0] == A[0].a[0])){//notice
			flag = 1;
			if (A[1].a[0] == A[2].a[0] && A[1].a[0] == A[0].a[0]){
				if (A[1].a[1] == A[2].a[1] && A[1].a[1] == A[0].a[1]){
					flag = 0;
					return;
				}
			}
		}
	}

}

int main()
{
	while (1){
		flag = 2;
	for (int i = 0; i < 3; i++)
		cin >> A[i].a;
	sort(A, A + 3);
	judge();

	cout << flag << endl;
	}
	return 0;
}