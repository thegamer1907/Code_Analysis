#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

char pass[5], s[200][5];

int main() {
    int n;
    scanf("%s", &pass);
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
    	scanf("%s", &s[i]);
    	if (s[i][0] == pass[0] && s[i][1] == pass[1]){
    		printf("YES");
    		return 0;
    	}
    }
    for (int i = 0;i  < n; i++){
    	for (int j = 0; j < n; j++){
    		if (s[i][1] == pass[0] && s[j][0] == pass[1]){
    			printf("YES");
    			return 0;
    		}
    	}
    }
    printf("NO");
    return 0;
}