#include<stdio.h>
int main(){
    char str[100];
    int res=0;
         printf("Enter a string: ");
    scanf("%s",str);
        int i = 0;
    

    while (str[i] != '\0') {
        int ival = str[i] - '0'; 
        res = res * 10 + ival;
        i++;
    }
    printf("%d",res);
   return 0;
}
