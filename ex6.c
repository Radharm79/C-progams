#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int main(){
        int a=20,b=10,result;
        int (*fun[3])(int,int);
        char ch;
        printf("Enter which arithmatic to perfrom:");
        ch=getchar();
        fun[0]=add;
        fun[1]=sub;
        fun[2]=mul;
        switch(ch){
                case '+':
                        result=(*fun[0])(a,b);
                        break;
                case '-':
                        result=(*fun[1])(a,b);
                        break;
                case '*':
                        result=(*fun[2])(a,b);
                        break;
        }
        printf("\nResult of %c is %d\n",ch,result);
        return 0;
}
