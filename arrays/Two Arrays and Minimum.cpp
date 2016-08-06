#include <iostream>
#include <climits>
#include<algorithm>
using namespace std;

int main()

{
//	cout<<"hello";
	long long int n,a,b,c,i;
	
	long long int M=1000000007;
	cin>>a>>b>>c;
	cin>>n;
	long long int A[n], B[n];
	//cout<<"hello";
	A[0] = (a*c)%M;
	//cout<<A[0]<<endl;
	//cout<<"hello";
	for(i=1 ; i<n ; i++)
	{
	     A[i] = (((((A[i-1]*a)%M)*b)%M)*c)%M + (((A[i-1]*a)%M)*b)%M + (((A[i-1]*a)%M)*c)%M;
	    A[i] = A[i]%M;
	}
	B[0] = (b*c)%M;
	for(i=1 ; i<n ; i++)
	{
	    B[i] = (((((B[i-1]*a)%M)*b)%M)*c)%M + (((B[i-1]*a)%M)*b)%M + (((B[i-1]*b)%M)*c)%M;
	    B[i] = B[i]%M;
	}   
    long long int a_min_first, a_min_sec, b_min_first, b_min_sec;
    long long int p, q, r, s;
    a_min_first=A[0];
    //cout<<"hello";
    for(i=0; i<n; i++ ){
    	if(a_min_first>=A[i]){
    		a_min_first=A[i];
    		p=i;
    	}
    }
    //cout<<"hello";
    //cout<<a_min_first<<endl;
    b_min_first=B[0];
    for(i=0; i<n; i++ ){
    	if(b_min_first>=B[i]){
    		b_min_first=B[i];
    		q=i;
    	}
    }
    a_min_sec=INT_MAX;
    for(i=0; i<n; i++ ){
    	if(a_min_sec>=A[i]&&i!=p){
    		a_min_sec=A[i];
    		r=i;
    	}
    }
    b_min_sec=INT_MAX;
    for(i=0; i<n; i++ ){
    	if(b_min_sec>=B[i]&&i!=q){
    		b_min_sec=B[i];
    		s=i;
    	}
    }
    //sort(A, A+n);
    //sort(B, B+n);
    //for(i=0; i<n; i++) cout<<A[i]<<"  "<<B[i]<<endl;
    //cout<<p<<" * "<<q<<" * "<<r<<"  * "<<s<<endl;
   // cout<<a_min_first+b_min_sec;
   //cout<<"hello";
    if(p!=q) cout<<(a_min_first + b_min_first)%M;
    else
    {
    	if((a_min_first+b_min_sec)%M > (a_min_sec+b_min_first)%M){
    		cout<<(a_min_sec+b_min_first)%M;
    	}
    	else
    		cout<<(a_min_first+b_min_sec)%M;
    }
    	
    return 0;
}
