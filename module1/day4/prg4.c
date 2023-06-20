#include<stdio.h>

int main(){
    int n;
    int even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n;i++){
            if(i%2==0){ //for elements arr[i]%2==0
                even+=arr[i];
            }else{
                odd+=arr[i];
            }
    }
    int diff=even-odd;
    printf("differnce between even and odd is %d",diff);
    return 0;

}