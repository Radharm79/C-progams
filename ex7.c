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
int add(int x,int y){
        return x+y;
}
int sub(int x,int y){
        return x-y;
}
int mul(int x,int y){
        return x*y;
}
