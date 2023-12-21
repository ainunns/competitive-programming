//Menghitung Median
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;

priority_queue<long long int, vector<long long int>,greater<long long int>> mih;
priority_queue<long long int> mxh;

void add(long long int a){
	if(mxh.size() && a>=mxh.top()) mih.push(a);
	else mxh.push(a);
	
	long long int b=mxh.size()-mih.size();
	if(b<0) b*=(-1);
	if(b>1){
		if(mxh.size()>mih.size()){
			long long int temp=mxh.top();
			mxh.pop();
			mih.push(temp);
		} else {
			long long int temp=mih.top();
			mih.pop();
			mxh.push(temp);
		}
	}
}
void ans(){
	long long int all=mih.size()+mxh.size();
	if(all%2==1){
		if(mxh.size()>mih.size()) cout<<mxh.top()<<"\n";
		else cout<<mih.top()<<"\n";
	} else {
		long long int ret=0;
		if(!mxh.empty()) ret+=mxh.top();
		if(!mih.empty()) ret+=mih.top();
		if(ret%2==0) cout<<ret/2<<"\n";
		else {
			cout<<fixed;
			cout<<setprecision(1)<<ret*(0.5)<<"\n";
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long int n,a;
	cin>>n;
	while(n--){
		cin>>a;
		add(a);
		ans();
	}
	return 0;
}
