#include <iostream>
#include <stack>

using namespace std;
int main()
{
	stack <int> s;
	int x;
	int query;
	cin>>query;
	while(query--){
		cin>>x;
		
		if(x==1){
			if(s.empty()){
				cout<<"No Food"<<endl;
			}
			else{
				cout<<s.top()<<endl;
				s.pop();
			}
		}
		
		else if(x==2){
			cin>>x;
			s.push(x);
		} 
	}
	
    
    return 0;
}
