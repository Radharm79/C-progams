#include<stdio.h>
void change(int []);
int main(){
        int a[]={1,2,3,4,5},i;
        printf("Array elements before change function call are\n");
        for(i=0;i<5;i++){
                printf("%d",a[i]);
        }
        change(a);
        printf("\nArray elements after calling change function are\n");
        for(i=0;i<5;i++){
                printf("%d",a[i]);
        }
        return 0;
}
        void change(int *p){
                int i;
                for(i=0;i<5;i++,p++){
                p=(p+2);
                }
        }
