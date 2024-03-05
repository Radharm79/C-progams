#include<stdio.h>
int main(){
        int a[2][3]={1,2,3,4,5,6},i,j,*p;
        printf("No. of rows=%ld\n",sizeof(a)/sizeof(a[0]));
         printf("No. of colimns=%ld\n",sizeof(a[0])/sizeof(int));
                 printf("Elements in a are\n");
         for(i=0;i<2;i++){
                 for(j=0;j<3;j++){
                         printf("%d",((a+i)+j));
                 }
                 printf("\n");
         }
         return 0;
}
