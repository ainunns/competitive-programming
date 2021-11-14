#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0, 
       start =0, end = 0, s=0; 
  
    for (int i=0; i< size; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
    for(int i=start; i<end; i++) cout<<a[i]<<" ";
    cout<<a[end]<<endl;
} 

int main()
{
    int n,a[2001];
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    maxSubArraySum(a,n);
}
