//2's Complement
#include <bits/stdc++.h>
long long bin(long long x){
	long long ret=0,temp=x,k2=1;
	while(temp>0){
		ret+=(temp%10)*k2;
		temp/=10; k2*=2;
	}
	return ret;
}
long long tscc(long long x){
	long long s=1,ret=0,temp=x,k2=1;
	while(temp>0){
		if(temp%10==1){
			ret+=((temp%10)-1)*k2;
		} else if(temp%10==0){
			ret+=((temp%10)+1)*k2;
		}
		temp/=10; k2*=10;
		if(temp==0){
			ret^=s;
		}
	}
	return bin(ret);
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld\n",tscc(n));
}
