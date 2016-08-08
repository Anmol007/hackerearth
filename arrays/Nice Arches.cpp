#include <iostream>
#include<string>
#include<stack>
using namespace std;
 
int main()
{
	stack <char> s;
	int count=0;
	int n;
	cin>>n;
	string a;
	while(n--){
		cin>>a;
		
		for(int i=0; i<a.size(); i++){
			
			if(!s.empty()&&a[i]==s.top()){
				s.pop();	
			}
			else s.push(a[i]);
		
		}
		if(s.empty()){
			count++;
			//cout<<"hello";
		}
		while(!s.empty()) s.pop();
		
	}
		cout<<count;
		return 0;
}
