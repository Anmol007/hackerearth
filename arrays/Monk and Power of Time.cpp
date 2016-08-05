#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int x;
	queue <int> q;
	int ideal[n];
	for(int i=0; i<n; i++){
		cin>>x;
		q.push(x);
	}
	int cost;
	for(int i=0; i<n; i++){
		cin>>ideal[i];
		while(q.front()!=ideal[i]){
			q.push(q.front());
			q.pop();
			cost++;
		}
		q.pop();
		cost++;
	}
	
	cout<<cost;
    return 0;
}
