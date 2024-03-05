#include<stdio.h>
#include<stdlib.h>
int main(){
        int *p,i,n;
        printf("Enter how many elements:");
        scanf("%d",&n);
        p=(int*)malloc(n*sizeof(int));
        if(p==NULL){
                printf("\nFail to allocate memory\n");
                exit(1);
        }
        printf("Memory allocated at:%ls\n",p);
        printf("Enter Values\n");
        for(i=0;i<n;i++){
                scanf("%d",&p[i]);
        }
        for(i=0;i<n;i++){
                printf("%d",p[i]);
        }
        return 0;
}
