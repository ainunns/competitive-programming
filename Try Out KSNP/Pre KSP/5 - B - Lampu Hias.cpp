#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);
	char a[n+1];
	scanf("%s",a);
	int cnt[26]={0};
	for(int i=0; i<n; i++)
		cnt[a[i]-'A']++;
	sort(cnt,cnt+26,greater<int>());
	if(cnt[2]==0){
		puts("-1");
		return 0;
	}
	int ans=3*cnt[2];
	cnt[1]-=cnt[2];
	cnt[0]-=cnt[2];
	// printf("%d %d\n", cnt[1],cnt[0]);
	ans+=(cnt[1]>0);
	ans+=(cnt[0]>0);
	printf("%d\n", ans);
}
/*
	aaabbc
	abcab
*/