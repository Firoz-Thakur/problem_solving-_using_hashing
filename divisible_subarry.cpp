you are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.


2
5
1 1 1 1 1
5
5 5 5 5 5
Sample Output
1
15
Explanation
In first test case, there is only one sub-array [1, 1, 1, 1, 1], such that 1+1+1+1+1=5, which is divisible by N=5





#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

  int t;
  cin>>t;
  while(t--)
  {
	  long long int n;
	  cin>>n;
	  long long int ar[n];
	  unordered_map<long long int,long long int> mp;
	  long long int sum=0;
	 
	 mp[0]=1; // mean the subarray sum is zero up to that i eg 1 1 1 1 1 and n=5   hence xC2=1  x=2 .. only mp[0]=2; 
	 for(long long int i=0;i<n;i++)
	  {
		  cin>>ar[i];
		  sum+=ar[i];
		  sum=sum%n;
		  sum=(sum+n)%n;  // for negative values
		  mp[sum]++;
	  }
	  long long int ans=0;
	 for(auto it=mp.begin();it!=mp.end();it++)
	 {
		 long long int x=it->second;
		 ans=ans+(x*(x-1))/2;
	 }
	 cout<<ans<<endl; 
  }


	return 0;
}
