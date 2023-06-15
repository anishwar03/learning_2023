#include <stdio.h>
int Max(int a,int b){
    if(a<b){
     return b;
            }
    else{
        return a;
    
        }
}

int TerOp(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    int a,b;
         printf("Enter two number\n");
         scanf("%d%d",&a,&b);
         int biggestifelse= Max(a,b);
         printf("By if-else %d\n",biggestifelse);
         int biggestter= TerOp(a,b);
         printf("By terinaryop %d",biggestter);
    return 0;
}