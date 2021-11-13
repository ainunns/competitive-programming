#include <iostream>
#include <vector>
#define fi first
#define se second
using namespace std;
int main(){
	char ss[10];
	scanf("%s",ss);
	int n,q;
	scanf("%d %d",&n,&q);
	char s[n];
	scanf("%s",s);
	vector<pair<int, char>>v;
	int idx=0;
	for(int i=0; i<n; i++){
		if(s[i]==s[idx])
			continue;
		v.push_back({idx,s[idx]});
		idx=i;
	}
	v.push_back({idx,s[idx]});
	while(q--){
		int le,ri;
		scanf("%d %d",&le,&ri);
		le--; ri--;
		int l=0,r=(int)v.size()-1,mi;
		idx=-1;
		while(l<=r){
			mi=l+(r-l)/2;
			if(v[mi].fi<=le){
				idx=mi;
				l=mi+1;
			} else
				r=mi-1;
		}
		l=idx+1,r=(int)v.size()-1;
		int idx2=idx;
		while(l<=r){
			mi=l+(r-l)/2;
			if(v[mi].fi<=ri){
				idx2=mi;
				l=mi+1;
			} else
				r=mi-1;
		}
		printf("%d", idx2-idx+1);
		if(idx2-idx+1<10){
			string ans="";
			for(int i=idx; i<=idx2; i++)
				ans+=v[i].se;
			printf(" %s", ans.c_str());
		} 
		puts("");
	}
}