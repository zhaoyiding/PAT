#include<iostream>
using namespace std;
const int MAX=100;
int main()
{
	int ar[MAX];
	int n,m;
	
	cin>>n>>m;
	for(int i=0;i<n;++i)
		cin>>ar[i];
		
	for(int k=0;k<m;++k)
	{
		auto temp=ar[n-1];
		for(auto i=n-2;i>=0;--i)
			ar[i+1]=ar[i];
		ar[0]=temp;
	}
	
	bool flag=true;
	for(int i=0;i<n;++i)
	{
		if(flag)
			flag=false;
		else
			cout<<' ';
		cout<<ar[i];
	}
		
	return 0;
}
