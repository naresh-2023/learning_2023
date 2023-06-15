#include <stdio.h>
int sumalt(int arr[],int size) {
    int sum=0;
    for(int i=0;i<size;i+=2) {
        sum+=arr[i];
    }
    return sum;
}
int main() {
    int arr[5]={10, 20, 30, 40, 50};
    int size,Ans;
    size=sizeof(arr)/sizeof(arr[0]);
    Ans=sumalt(arr,size);
    printf("The sum of every alternate element starting from index 0 is: %d\n",Ans);
    return 0;
}