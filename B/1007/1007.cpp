#include<iostream>
using namespace std;
int next_prime(int cur)
{
	int i;
	
	for(int next=(cur%2?cur+2:cur+1);;next+=2)
	{
		for(i=3;i*i<=next;++i)
		{
			if(next%i==0)
				break;
		}
		if(i*i>next)
			return next;
	}
}
int main()
{
	int n;
	cin>>n;
	
	if(n<5)
		cout<<0<<endl;
	else
	{
		int cur=3,next,ct=0;
		while(1)
		{
			next=next_prime(cur);
			if(next<=n)
			{
				if(next-cur==2)
					++ct;
			}
			else
				break;
			cur=next;
		}
		cout<<ct<<endl;
	}
	return 0;
}
