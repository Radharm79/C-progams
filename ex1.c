/*Write syntax for Pointer to Function.:return_type(*pointerName)(arg1,arg2...)
 
  Write a Program to implement arithmatic operations using pointer to functions.*/

#include<stdio.h>
int (*func)(int,int);
int add(int,int);
         //func=&add;}
int sub(int,int);
         //func=sub;}
int main()
{
	int result;
	int (*func)(int,int);
	func=&add;
	result=(*func)(10,20);
	printf("\nResult:%d",result);
	func=sub;
	result=(*func)(20,10);
	printf("%d",result);



}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
