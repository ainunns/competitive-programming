//Cetiri
#include <bits/stdc++.h>
int main(){
	int bil[3],temp;
	for(int i=0; i<3; i++){
		scanf("%d",&bil[i]);
	}
	for(int i=0; i<3; i++){
		for(int j=(i+1); j<3; j++){
			if(bil[i]>bil[j]){
				temp=bil[i];
				bil[i]=bil[j];
				bil[j]=temp;
			}
		}
	}
	if(2*bil[1]==(bil[2]+bil[0])){
		printf("%d\n",bil[2]+bil[1]-bil[0]);
	} else if((bil[1]-bil[0])<(bil[2]-bil[1])){
		printf("%d\n",2*bil[1]-bil[0]);
	} else if((bil[1]-bil[0])>(bil[2]-bil[1])){
		printf("%d\n",2*bil[1]-bil[3]);
	}
}
