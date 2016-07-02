#include<iostream>
#include<string>
using namespace std;
int main()
{
	string num;
	int div,res=0;
	bool flag=false,only=false;
	
	cin>>num>>div;
	for(auto p=num.begin();p!=num.end();++p)
	{
		auto n=10*res+(*p-'0');
		if(n>=div)
		{
			flag=true;
			cout<<n/div;
			res=n%div;
		}
		else
		{
			if(flag)
				cout<<0;
			if(p==num.end()-1)
			{
				res=n;
				if(1==num.size())
					only=true;
			}
			else
			{
				n=10*n+(*++p-'0');
				cout<<n/div;
				res=n%div;
			}
		}
	}
	if(only)
		cout<<0<<' '<<res<<endl;
	else
		cout<<' '<<res<<endl;
	return 0;
}
