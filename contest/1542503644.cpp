#include <bits/stdc++.h>
#define PI 3.14159265358979323846
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool possible = false;
    int h, m, s, t1, t2, i;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12)
    	h = 0;
    if(t1 == 12)
    	t1 == 0;
    if(t2 == 12)
    	t2 = 0;

    double hour_angle, minute_angle, second_angle, t1_angle, t2_angle;
    
    second_angle = s*6.0;
    minute_angle = (m*6.0 + s/10.0);
    hour_angle = (h*30.0 + m/2.0 + s/120.0);
    vector<double> v(3);
    v[0] = second_angle;
    v[1] = minute_angle;
    v[2] = hour_angle;    
   	sort(v.begin(), v.end());

   	t1_angle = t1*30.0;
   	t2_angle = t2*30.0;

   	for(i=0;i<2;i++) {
   		if(v[i]<t1_angle && t1_angle < v[i+1] && v[i] < t2_angle && t2_angle < v[i+1]) {
   			possible = true;
   			break;
   		}
   	}
   	if((t1_angle > v[2] && t2_angle > v[2]) || (t1_angle < v[0] && t2_angle < v[0]))
   		possible = true;
   	if((t1_angle > v[2] && t2_angle < v[0]) || (t1_angle < v[0] && t2_angle > v[2]))
   		possible = true;

   	if(possible)
   		cout << "YES";
   	else
   		cout << "NO";


    return 0;
}