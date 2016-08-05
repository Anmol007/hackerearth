#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int test;
	int cars;
	vector <int> speed;
	int x;
	cin>>test;
	int ans=0;
	while(test--){
		cin>>cars;
		speed.clear();
		ans=1; //front car moves with max speed
		
		for(int i=0; i<cars; i++){
			cin>>x;
			speed.push_back(x);
		}
		
		//start from second car onward
		for(int i=1; i<cars; i++){
			//cout<<speed[i-1]<<" * "<<speed[i]<<endl;
			if(speed[i-1]>=speed[i]) ans++;
			else speed[i]=speed[i-1];
		}
		cout<<ans<<endl;
	}
    
    return 0;
}
