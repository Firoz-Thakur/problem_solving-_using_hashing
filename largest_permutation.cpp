You are given an unordered array of unique integers incrementing from . You can swap any two elements a limited number of times.
Determine the largest lexicographical value array that can be created by executing no more than the limited number of swaps.

For example, if  and the maximum swaps , the following arrays can be formed by swapping the  with the other elements:

5 1
4 2 3 5 1
Sample Output 0

5 2 3 4 1

Sample Input 1

3 1
2 1 3
Sample Output 1

3 1 2


vector<int> largestPermutation(int k, vector<int> arr){
  
 map <int,int > mp;
  for(int i=0;i<arr.size();i++)
  {
      mp[arr[i]]=i;
  }
 int x=arr.size();
  //cout<<x;
  for(int i=0;i<arr.size();i++)
  {
      if(k==0 || x==0)
        return arr;
      if(arr[i]!=x)
      {
         mp[arr[i]]=mp[x];
         swap(arr[i],arr[mp[x]]);
         k--;
      }
      x--;
  }
return arr;
