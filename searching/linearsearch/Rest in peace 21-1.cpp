#include <iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	int n;
	int x;
	int flag=0;
	while(test--){
		cin>>n;
		x=n;
		
		while(x!=0){
			flag=0;
			if(x%100==21){
				cout<<"The streak is broken!"<<endl; 
				flag=1; break;
			}	
			else {
				x=x/10;
			}
		}
		if(flag==1) continue;
		else if(n%21==0) cout<<"The streak is broken!"<<endl; 
		else cout<<"The streak lives still in our heart!"<<endl;
		
	}
    
    return 0;
}
