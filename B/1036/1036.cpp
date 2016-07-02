#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	getchar();
	char c=getchar();
	
	for(int i=0;i!=n;++i)
		cout<<c;
	cout<<endl;
	
	auto mid=n%2/2.0>=0.5?n/2-1:n/2-2;
	for(int i=0;i!=mid;++i)
	{
		cout<<c;
		for(int j=0;j!=n-2;++j)
			cout<<' ';
		cout<<c<<endl;
	}
	
	for(int i=0;i!=n;++i)
		cout<<c;
	cout<<endl;
	return 0;
}
