#include<stdio.h>
int main(){
        int a[]={1,2,3,4,5},i,*p;
        p=a;
        for(i=0;i<5;i++){
                printf("%d",*(p+i));
        }
        return 0;
}
