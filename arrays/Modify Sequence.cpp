#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]) break;
		else {a[i+1]=a[i+1]-a[i]; a[i]=a[i]-a[i];}
		
	}
	
	for(int i=0 ; i<n; i++){
		if(a[i]!=0) {cout<<"NO"; return 0;}
	}
	cout<<"YES";
    return 0;
}
