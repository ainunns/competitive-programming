// C++ Effective  program to shuffle an array of size 2n 
/*Shuffle integers
Given an array of n elements in the following format { a1, a2, a3, a4, ….., an/2, b1, b2, b3, b4, …., bn/2 }. The task is shuffle the array to {a1, b1, a2, b2, a3, b3, ……, an/2, bn/2 } without using extra space.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow, Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array.

Output:
Print the shuffled array without using extra space.

Constraints:
1<=T<=10^5
1<=n<=10^5
1<=a[i]<=10^5

Example:
Input:
2
4
1 2 9 15
6
1 2 3 4 5 6

Output:
1 9 2 15 
1 4 2 5 3 6
*/
#include <bits/stdc++.h> 
using namespace std; 
  
// function to shuffle an array of size 2n 
void shufleArray(int a[], int f, int l) 
{ 
     if(l>f){ 
        return; 
    }    
  
    // If only 2 element, return 
    if (l - f == 1) 
        return; 
  
    // finding mid to divide the array 
    int mid = (f + l) / 2; 
  
    // using temp for swapping first half of second array 
    int temp = mid + 1; 
  
    // mmid is use for swapping second half for first array 
    int mmid = (f + mid) / 2; 
  
    // Swapping the element 
    for (int i = mmid + 1; i <= mid; i++) 
        swap(a[i], a[temp++]); 
  
    // Recursively doing for first half and second half 
    shufleArray(a, f, mid); 
    shufleArray(a, mid + 1, l); 
} 
  
// Driven Program 
int main() 
{ 
    int t,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d",&a[j]);
        }
        shufleArray(a, 0, n - 1);
        for(int j=0; j<n-1; j++){
            printf("%d ",a[j]);
        }
        printf("%d\n",a[n-1]);
    }
     
    return 0; 
} 

