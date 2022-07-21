#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a[4],i;
	    cin>>x;
	    cin>>a[1]>>a[2]>>a[3];
	   if(a[x]==0)
	    cout<<"NO";
	     else 
	     if(a[a[x]]==0)
	      cout<<"NO";
	   else
	   cout<<"YES";
       cout<<endl;
	   }
	return 0;
}
