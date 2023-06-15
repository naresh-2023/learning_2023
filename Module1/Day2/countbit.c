#include <stdio.h>
int numcount(int num) {
    int count = 0;
    while(num){
        count+=num&1;
        num>>=1;
    }
    return count;
}
int arrcount(int arr[],int size) {
    int totalBits=0;
    for (int i=0;i<size;i++) {
        totalBits+=numcount(arr[i]);
    }
    return totalBits;
}
int main() {
    int arr[3]={0x1,0xF4,0x10001};
    int size=sizeof(arr)/sizeof(arr[0]);
    int total=arrcount(arr,size);
    printf("The total number of set bits in array is %d\n",total);
    return 0;
}