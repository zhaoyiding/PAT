#include<iostream>
#include<cctype>
#include<string>
#include<set>
using namespace std;
int main()
{
	set<char> cs;
	bool flag=true;
	
	char ch;
	while((ch=getchar())!='\n')
	{
		cs.insert(ch);
		if(isalpha(ch))
		{
			ch=tolower(ch);
			cs.insert(ch);
		}
		else if(ch=='+')
			flag=false;
	}
	
	string s;
	cin>>s;
	for(auto c:s)
	{
		auto p=cs.find(c);
		if(p==cs.end())
		{
			if(isupper(c))
			{
				if(flag)
					cout<<c;
			}
			else
				cout<<c;
		}
	}
	cout<<endl;
	return 0;
}
