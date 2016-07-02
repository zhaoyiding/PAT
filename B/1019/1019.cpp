#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
bool descend(const char &a,const char &b)
{
	return a>b;
}
int main()
{
	string s;
	
	cin>>s;
	if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3])
	{
		cout<<s<<" - "<<s<<" = 0000"<<endl;
	}
	else
	{
		while(s!="6174")
		{
			string a=s,b=s;
			sort(a.begin(),a.end(),descend);
			sort(b.begin(),b.end());
			auto n1=atoi(a.c_str());
			auto n2=atoi(b.c_str());
			auto n3=n1-n2;
		
			cout<<setfill('0')<<setw(4)<<n1<<" - "<<setw(4)<<n2<<" = "<<setw(4)<<n3<<endl;
			s=to_string(n3);
			switch(s.size())
			{
				case 1:
					s.insert(s.begin(),'0');
				case 2:
					s.insert(s.begin(),'0');
				case 3:
					s.insert(s.begin(),'0');
			}
		}
	}
	return 0;
}
