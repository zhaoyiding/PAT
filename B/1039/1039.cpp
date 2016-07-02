#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	int lack=0;
	
	cin>>s1>>s2;
	for(auto p=s2.begin();p!=s2.end();++p)
	{
		if(!s1.size())
		{
			lack+=(s2.end()-p);
			break;
		}
		auto q=find(s1.begin(),s1.end(),*p);
		if(q==s1.end())
			++lack;
		else
			s1.erase(q);
	}
	if(lack)
		cout<<"No "<<lack<<endl;
	else
		cout<<"Yes "<<s1.size()<<endl;
	return 0;
}
