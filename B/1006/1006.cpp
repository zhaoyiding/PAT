#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	auto n=s.size();
	switch(n)
	{
		case 3:
			{
				auto bai=s[0]-'0';
				auto shi=s[1]-'0';
				auto ge=s[2]-'0';
				
				for(int i=0;i!=bai;++i)
					cout<<'B';
				for(int i=0;i!=shi;++i)
					cout<<'S';
			}
			break;
		case 2:
			{
				auto shi=s[0]-'0';
				auto ge=s[1]-'0';
				
				for(int i=0;i!=shi;++i)
					cout<<'S';
			}
		default:
			break;
	}
	cout<<1<<atoi(s.c_str())<<endl;
	return 0;
}
