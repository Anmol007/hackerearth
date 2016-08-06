#include <iostream>
using namespace std;

int main()
{
	int n;
	int x;
	cin>>n;
	cin>>x;
	int a[n];
	int score=0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	int skip=0;
	for(int i=0; i<n; i++){
		if(a[i]<=x) score++;
		else skip++;
		if(skip>1) break;
		
	}
	cout<<score;
	
	
    
    return 0;
}
