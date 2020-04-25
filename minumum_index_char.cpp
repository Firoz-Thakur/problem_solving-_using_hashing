Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. 
If no character of patt is present in str then print ‘No character present’.

Example:
Input:
2
geeksforgeeks
set
adcffaet
onkl

Output:
e
$

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    cin.get();
	    string s;
	    string pat;
	    cin>>s;
	    cin>>pat;
	    map<char,long int > mp;
	    for(long int i=0;i<s.size();i++)
	    {
	        if(mp.count(s[i]))
	         continue;
	        else
	          mp[s[i]]=i;
	    }
	   char ch;
	   long int minx=INT_MAX;
	   for(long int i=0;i<pat.size();i++)
	   {
	       if(mp.count(pat[i]))
	        {
	           if(minx>mp[pat[i]]){
	            minx=mp[pat[i]];
	            ch=pat[i];
	           }
	        }
	   }
	  cout<<ch<<endl;
	}
	
	return 0;
}
