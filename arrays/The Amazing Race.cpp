#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
  	long long int M=1000000009;
  	//cout<<M;
  	vector <long long int> height, sight;
  	long long int n;
  	long long int test;
  	cin>>test;
  	long long int answer;
  	long long int x;
  	while(test--){
  		answer=0;
	  	cin>>n;
	  	height.clear();
	  	sight.clear();
	  	stack <int> s;
	  	//cout<<"hello";
	  	for(long long int i=0; i<n; i++){
	  		cin>>x;
	  		height.push_back(x);
	  		sight.push_back(0);
	  	}
	  	
	  	long long int h;
	  	bool done;
	  	long long int prev=0;
	  	//cout<<"hello";
	  	for(long long int i=0; i<n; i++){
	  		done=false;
	  		while(!s.empty() && !done){
	  			if(height[i]>height[s.top()]) 
	  			{	prev=s.top();
	  				s.pop();
	  			}
	  			else
	  				done=true;
	  		}
	  		
	  		if(s.empty()) 
	  			h=0;
	  		else 
	  			h=s.top();
	  		
	  		sight[i]= (sight[i]%M+ ((i-h)*(i+1))%M)%M;
	  		
	  	//	cout<<(i-h)<<"*";
	  		s.push(i);
	  		
	  	}
	  //	cout<<endl;
	  	while(!s.empty()) s.pop();
	  	prev=n-1;
	  	for(long long int i=n-1; i>=0; i--){
	  		done=false;
	  		while(!s.empty() && !done){
	  			if(height[i]>height[s.top()]) 
	  				{
	  				
	  				prev=s.top();
	  				s.pop();
	  				}
	  			else
	  				done=true;
	  		}
	  		
	  	//	cout<<"top="<<s.top();
	  		if(s.empty()) {
	  			//cout<<"pop";
	  			h=n-1;
	  		}
	  		else 
	  			h=s.top();
	  		
	  		sight[i]= (sight[i]%M+ ((h-i)*(i+1))%M)%M;
	  		
	  	//	cout<<"("<<h<<","<<i<<")"<<"*";
	  	//cout<<h-i<<"*";
	  		s.push(i);
	  		
	  	}
	  	
  		//maximum sight output f
  		//incase of tie output the one with minimum index
  		//therefore i'm starting my search from n-1 rather that 0
  		long long int max=sight[n-1];
  		long long int index=n-1;
  		//for(int i=0; i<n; i++) cout<<sight[i]<<" ; ";
  		for(long long int i=n-1; i>=0; i--){
			if(max<=sight[i]){ 
				max=sight[i];
				index=i;
			}
  		}
  		cout<<index+1<<endl;
  	}
    return 0;
}
