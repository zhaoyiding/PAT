#include<iostream>
#include<cctype>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main()
{
	vector<string> day{"MON","TUE","WED","THU","FRI","SAT","SUN"};
	map<char,int> hour{{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},
	{'7',7},{'8',8},{'9',9},{'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15},{'G',16},{'H',17},{'I',18},
	{'J',19},{'K',20},{'L',21},{'M',22},{'N',23}};
	string s1,s2,s3,s4;
	int ct=1;
	
	cin>>s1>>s2>>s3>>s4;
	for(auto p1=s1.begin(),p2=s2.begin();;++p1,++p2)
	{
		auto c1=*p1,c2=*p2;
		if(c1==c2)
		{
			if(1==ct&&c1>='A'&&c1<='G')
			{
				auto i=c1-'A';
				cout<<day[i];
				++ct;
			}
			else if(2==ct)
			{
				if(isdigit(c1))
				{
					cout<<' '<<0<<hour[c1]<<':';
					break;
				}	
				else if(c1>='A'&&c1<='N')
				{
					cout<<' '<<hour[c1]<<':';
					break;
				}
			}
		}
	}
	
	for(int i=0;;++i)
	{
		auto c1=s3[i],c2=s4[i];
		if(c1==c2&&isalpha(c1))
		{
			if(i<=9)
				cout<<0<<i<<endl;
			else
				cout<<i<<endl; 
			break;
		}
	}
	return 0;
}
