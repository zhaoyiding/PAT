#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	getchar();
	char c=getchar();
	
	int si,sk;
	for(int i=1,k=1;k<=n;++i,k=2*i*i-1)
	{
		si=i;
		sk=k;
	}
	int row=si,col=2*si-1;
	for(int i=0;i!=row;++i)
	{
		for(int j=0;j!=i;++j)
			cout<<' ';
		for(int j=0;j!=col-2*i;++j)
			cout<<c;
		cout<<endl;
	}
	for(int i=1;i!=row;++i)
	{
		for(int j=0;j!=col/2-i;++j)
			cout<<' ';
		for(int j=0;j!=2*i+1;++j) 
			cout<<c;
		cout<<endl;
	}
	cout<<n-sk<<endl;
	return 0;
}
