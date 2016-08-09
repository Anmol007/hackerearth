
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n, m;
		string s;
		cin>>s;
		cin>>n>>m;
		int len=s.length();
		sort(s.begin()+n, s.begin()+m+1);
		reverse(s.begin()+n, s.begin()+m+1);
		cout<<s<<endl;
		
	}
	return 0;
}
