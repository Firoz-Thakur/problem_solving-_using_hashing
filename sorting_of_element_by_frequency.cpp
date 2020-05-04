Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come 
first. If frequencies of two elements are same, then smaller number comes firs

Example:
Input:
2
5
5 5 4 6 4
5
9 9 9 2 5
Output:
4 4 5 5 6
9 9 9 2 5

Explanation:
Testcase1: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element
comes first. So 4 4 comes first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.
Testcase2: The highest frequency here is 3. The element 9 has the highest frequency. So 9 9 9 comes first. Now both 2 and 5 have same 
frequency. So we print smaller element first.
The output is 9 9 9 2 5.


bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second==b.second)
     return a.first<b.first;
   else
    return a.second>b.second;
  
}

void sortByFreq(int ar[],int n)
{
  map<int,int> mp;
  
  for(int i=0;i<n;i++)
  {
    mp[ar[i]]++;
  }
  vector <pair<int,int>> v;
 for(auto it=mp.begin();it!=mp.end();it++)
 {
     v.push_back(make_pair(it->first,it->second));
     
 }
 sort(v.begin(),v.end(),cmp);
 
 for(auto it=v.begin();it!=v.end();it++)
 {
     int k=it->second;
     while(k--)
     {
         cout<<it->first<<" ";
     }
 }
 
}
