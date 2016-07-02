#include<iostream>
using namespace std;
int main()
{
	int m,n,ct=1,cl=0;
	bool flag=true;
	
	cin>>m>>n;
	if(1==m)
	{
		cout<<2;
		flag=false;
		++cl;
	}
	for(int k=3;ct<n;k+=2)
	{
		int i=3;
		for(;i*i<k;++i)
		{
			if(k%i==0)
				break;
		}
		if(i*i>k)
		{
			if(++ct>=m)
			{
				if(flag)
				flag=false;
				else
					cout<<' ';
				cout<<k;
				if(++cl==10)
				{
					cl=0;
					cout<<endl;
					flag=true;
				}
			}
		}
	}
	
	return 0;
}
