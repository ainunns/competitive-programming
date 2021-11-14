// http://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0
/*
Given a sorted array A, size N, of integers; every element appears twice except for one. Find that element that appears once in array.

Input:
The first line of input consists of T, the number of the test cases. T testcases follow. Each testcase contains two lines of input.
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
For each testcase, in a new line, print the number that appears only once in the array.

Constraints:
1 = T = 100
1 = N = 107
0 = A[i] = 1017

Example:
Input:
1
11
1 1 2 2 3 3 4 50 50 65 65
Output:
4
*/

#include <cstdio>
#include <iostream>

using namespace std;
#define MAX 105

void input(int [MAX], int&);
void findNonRepeatedElement(int [MAX], int);
void showArr(int [MAX], int);
bool isEven(int);

int main() {
    int t;

    cin >> t;
    while (t-- > 0) {
        int arr[MAX];
        int len;

        input(arr, len);
        //showArr(arr, len);
        findNonRepeatedElement(arr, len);
    }

    return 0;
}

void input(int arr[MAX], int& len) {
    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}

void showArr(int arr[MAX], int len) {
    printf("\nInd:\t");
    for (int i = 0; i < len; i++) {
        printf("[%d]\t", i);
    }
    cout << endl;

    printf("Val:\t");
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    cout << endl;
}

void findNonRepeatedElement(int arr[MAX], int len) {
    int lo = 0;
    int hi = len - 1;
    int mid;
    int res;

    while ((hi - lo) >= 2) {
		if (arr[lo] != arr[lo + 1]) {
			res = lo;
			break;
		} else if (arr[hi] != arr[hi - 1]) {
			res = hi;
			break;
		} else {
			mid = (lo + hi) / 2;
			//printf("a[%d] = %d\ta[%d] = %d\ta[%d] = %d\n", lo, arr[lo], mid, arr[mid], hi, arr[hi]);

			if (isEven(mid - lo + 1)) {
				if (arr[mid] == arr[mid - 1]) {
					lo = mid + 1;
				} else {
					hi = mid - 1;
				}
			} else {
				if (arr[mid] == arr[mid - 1]) {
					hi = mid - 2;
				} else if (arr[mid] == arr[mid + 1]) {
					lo = mid + 2;
				} else {
					res = mid;
					break;
				}
			}
		}
    }

    //printf("\nUnique element is arr[%d] = %d\n", res, arr[res]);
    printf("%d\n", arr[res]);
}

bool isEven(int n) {
	return ((n % 2) == 0);
}

