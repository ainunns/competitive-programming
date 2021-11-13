//Permutasi Zig-Zag
#include <bits/stdc++.h>
bool zigzag,c1,c2,pernah[10];
int catat[10],N;
void tulis(int kedalaman) {
	if (kedalaman > N) {
		zigzag=true;
		for(int i=2; i<N; i++){
			c1=((catat[i]>catat[i-1])&&(catat[i]>catat[i+1]));
			c2=((catat[i]<catat[i-1])&&(catat[i]<catat[i+1]));
			if(!(c1||c2)){
				zigzag=false;
			}
		}
		if(zigzag){
			// Cetak password
			for (int i = 1; i <= N; i++) {
				printf("%d", catat[i]); // Cetak
			}
			printf("\n");
		}
	} else {
		// Masuk ke lapisan lebih dalam
		for (int i = 1; i <= N; i++) {
			if (!pernah[i]) { // i belum pernah?
			pernah[i] = true; // Gunakan
			catat[kedalaman] = i; // Catat di sini
			tulis(kedalaman + 1);
			pernah[i] = false; // Selesai menggunakan
			}
		}
	}
}
int main(){
	scanf("%d",&N);
	tulis(1);
}
