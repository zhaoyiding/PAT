#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,b,base,sum;
	stack<int> ist;
	
	cin>>a>>b>>base;
	sum=a+b;
	while(sum>=base)
	{
		auto n=sum%base;
		ist.push(n);
		sum/=base;
	}
	ist.push(sum);
	
	while(!ist.empty())
	{
		cout<<ist.top();
		ist.pop();
	}
	cout<<endl;
	return 0;
}
