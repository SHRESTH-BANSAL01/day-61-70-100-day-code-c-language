//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int missingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {0,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = missingNumber(arr, n);
    printf("%d\n", ans);
    return 0;
}