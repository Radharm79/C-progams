/* Function Pointer as an argument to a function
Syntax: return_type function name(argument list 1,2,3 ,pointertofunction as argument)*/
#include<stdio.h>
void operation(char,int,int,int (*fun)(int,int));
int add(int ,int );
int sub (int ,int);

int main()
{
	int a=10,b=20,res;
	char ch;
	printf("\nOperation Name:");
	ch=getchar();
	switch(ch)
	{
		case '+':
			operation(ch,a,b,add);
			break;
		case '-':
			operation(ch,a,b,sub);
			break;
		default:
			printf("Invalid!");
				
		
	}
}
void operation(char ch,int x,int y,int (*fun)(int,int))
{
	int result;
	result=fun(x,y);
	printf("\n%c Result : %d\n",ch,result);
}

int add(int x,int y)
{
        return x+y;
}
int sub(int x,int y)
{
        return x-y;
}

