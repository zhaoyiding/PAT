#include<iostream>
#include<cctype>
#include<deque>
#include<string>
using namespace std;
int main()
{
	int a,b,sum,ct=0;
	deque<char> cd;
	
	cin>>a>>b;
	sum=a+b;
	string s=to_string(sum);
	
	for(auto p=s.crbegin();p!=s.crend();++p)
	{
		cd.push_front(*p);
		++ct;
		if(3==ct)
		{
			if(sum>0)
			{
				if(p!=s.crend()-1)
					cd.push_front(',');	
			}
			else
			{
				if(p!=s.crend()-2&&p!=s.crend()-1)
					cd.push_front(',');
			}
			ct=0;
		}
	}
	for(auto c:cd)
		cout<<c;
	cout<<endl;
	return 0;
}
