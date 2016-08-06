#include <iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	
	
	int n;
	cin>>n;
	int x;
	queue <int> q;
	int rating=0;
	
	for(int i=0; i<n; i++){
		cin>>x;
		q.push(x);
	}
	stack <int> s;
	while(!q.empty()){
		
		if(q.front()==0){
			if(!s.empty())
			{
				rating=rating-s.top();
				s.pop();
				q.pop();
			}
			else q.pop();
		}
		else{
			s.push(q.front());
			rating=rating+ q.front();
			q.pop();
		}
	}
	cout<<rating;
	
    return 0;
}
