#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,x,y,c=0;
	vector< pair<long long, long long> > v;
	scanf("%lld",&n);
	for(int i=0; i<n; i++){
		scanf("%lld %lld",&x,&y);
		v.push_back(make_pair(x,y-1));
	}
	sort(v.begin(),v.end());
    long long left=v[0].first,right=v[0].second,saved;
	for(int i=1; i<n; i++){
        if (v[i].first > right || v[i].second < left) {
            saved=i;
            break;
        } else { 
            left = max(left, v[i].first); 
            right = min(right, v[i].second); 
        } 
	}
    long long books=left;
    for(int i=0; i<n; i++){
        if(v[i].first<=books && books<=v[i].second){
            c++;
        }
    }
	printf("%lld %lld\n",books,c);
}
