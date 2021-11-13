//Alphabet Spam
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	string s;
	long long pjg;
	double sp=0,hb=0,hk=0,sy=0;
	double rsp=0,rhb=0,rhk=0,rsy=0;
	cin>>s;
	pjg=s.length();
	forn(i,0,pjg-1){
		if(s[i]==95){
			sp++;
		} else if((s[i]>=65)&&(s[i]<=90)){
			hb++;
		} else if((s[i]>=97)&&(s[i]<=122)){
			hk++;
		} else {
			sy++;
		}
	}
	rsp+=(sp/pjg);
	rhk+=(hk/pjg);
	rhb+=(hb/pjg);
	rsy+=(sy/pjg);
	printf("%.15lf\n",rsp);
	printf("%.15lf\n",rhk);
	printf("%.15lf\n",rhb);
	printf("%.15lf\n",rsy);
}
