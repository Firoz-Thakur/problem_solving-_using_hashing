Given an array arr[] of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive
numbers can be in any order.

Example:
Input:
2
7
2 6 1 9 4 5 3
7
1 9 3 10 4 20 2

Output:
6
4

Explanation:
Testcase 1:  The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int ar[n];
	    unordered_set<long long int >s;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        s.insert(ar[i]);
	    }
	   long long int ans=INT_MIN;
	   for(int i=0;i<n;i++)
	   {
	       if(s.find(ar[i]-1)!=s.end())
	       {
	           continue;
	       }
	       else
	       {
	           long long int c=0;
	           long long int x=ar[i];
	           while(s.find(x)!=s.end())
	           {
	               c++;
	               x++;
	           }
	         ans=max(ans,c);    
	       }
	   }
	   cout<<ans<<endl;
	    
	}
	
	return 0;
}
