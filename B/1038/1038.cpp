#include<iostream>
using namespace std;
int main()
{
	int a[101]={0};
	int n;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		int k;
		cin>>k;
		++a[k];
	}
	
	bool flag=true;
	int m;
	cin>>m;
	for(int i=0;i!=m;++i)
	{
		int k;
		cin>>k;
		if(flag)
			flag=false;
		else
			cout<<' ';
		cout<<a[k];
	}
	cout<<endl;
	return 0;
}
