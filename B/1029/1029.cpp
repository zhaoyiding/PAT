#include<iostream>
#include<cctype>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<char> cst;
	string s1,s2;
	
	cin>>s1>>s2;
	auto p=s1.begin(),q=s2.begin();
	while(p!=s1.end())
	{
		if(q!=s2.end())
		{
			if(*p==*q)
			{
				++p;
				++q;
			}
			else
			{
				auto c=*p;
				if(islower(c))
					c=toupper(c);
				if(cst.find(c)==cst.end())
				{
					cout<<c;
					cst.insert(c);
				}
				++p;
			}
		}
		else
		{
			auto c=*p;
			if(islower(c))
				c=toupper(c);
			if(cst.find(c)==cst.end())
			{
				cout<<c;
				cst.insert(c);
			}
			++p;
		}
	}
	cout<<endl;
	return 0;
}
