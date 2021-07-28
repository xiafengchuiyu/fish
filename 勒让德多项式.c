/*
用递归方法求n阶勒让德多项式的值，递归公式为
n=0     p n(x) =1  
n=1     p n(x) =x
n>1     p n(x) =((2n-1)*x* p n-1(x) -(n-1)* p n-2(x))/n
结果保留2位小数。*/
#include<stdio.h>
double lender(int n , int x)
{
    if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return x;
	}	
	else
	{
		return ((2*n-1)*x*lender(n-1,x)-(n-1)*lender(n-2,x))/n;
	}
}
int main()
{
	int n=0;
	int x=0;
	double ret=0.0;
	printf("please enter 勒让德多项式的 n and x\n");
	scanf("%d %d",&n,&x);
	ret=lender(n,x);
	printf("%.2lf",ret);
	return 0;
}
