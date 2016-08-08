#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *a;
	a= (int*) malloc(sizeof(int)*100);
	int *b;
	b= (int*) malloc(sizeof(int)*100);
	
	int n;
	int m;
	int test;
	cin>>test;
	int *temp;
	
	int j;
	while(test--){
		
		cin>>n>>m;
		for(int i=0; i<n; i++) cin>>a[i];
		
		while(m--){
			//boundary conditions
			if(a[1]==1) b[0]=1; else b[0]=0;
			if(a[n-2]==1) b[n-1]=1; else b[n-1]=0;
			
			for(int i=1; i<=n-2; i++){
				if(a[i-1]==1&&a[i+1]==1) b[i]=1;
				else b[i]=0;
				
			}
			
			for(j=0; j<n; j++) {
				if(a[j]!=b[j]){
					break;	
				} 
			}
			if(j==n) break;
			
			temp=a;
			a=b;
			b=temp;
			
		}
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
		
		cout<<endl;
		
	}
	
   
    return 0;
}
