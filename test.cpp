#include <bits/stdc++.h>

using namespace std;

bool prime=1;

bool check(int n){
	if(n%5==0)
		prime=0;
	return prime;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double x, y, v=0.50;
	cin >> x >> y;
	x+=v;
	if(x>y||check(x)){
		cout << fixed << setprecision(2) << y;
	} else{
		y-=x;
		cout << fixed << setprecision(2) << y;
	}
	cout << "\n";
	return 0;
}
