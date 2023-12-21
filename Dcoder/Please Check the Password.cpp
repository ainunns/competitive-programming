//Please Check the Password!
#include <bits/stdc++.h>

using namespace std;

string reversed(string s){
  stack<char> q;
  string k="";
  int z=s.length();
  for(int i=0; i<z; i++){
    q.push(s[i]);
  }
  while(!q.empty()){
    k+=q.top();
    q.pop();
  }
  return k;
}

bool binser(string arr[],int l,int r,string s){
  if(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==s){
      return true;
    } else if (arr[mid]>s){
      return binser(arr,l,mid-1,s);
    } else {
      return binser(arr,mid+1,r,s);
    }
  }
  return false;
}

int main()
{
  int n;
  vector<string>v;
  string s[100],reverse[100],found;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    scanf("%s",s[i]);
    reverse[i]=reversed(s[i]);
    v.push_back(reverse[i]);
  }
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++){
    reverse[i]=v[i];
  }
  for(int i=0; i<n; i++){
    if(binser(reverse,0,n,s[i])){
      found=s[i];
      break;
    }
  }
  int k=found.length();
  cout<<k<<" "<<found[k/2]<<endl;
}
