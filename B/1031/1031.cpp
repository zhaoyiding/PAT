#include<iostream>
#include<cctype>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int> weight{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	vector<char> check{'1','0','X','9','8','7','6','5','4','3','2'};
	vector<string> sv;
	int n,ct=0;
	
	cin>>n;
	for(int i=0;i!=n;++i)
	{
		string s;
		cin>>s;
		sv.push_back(s);
	}
	
	for(auto &s:sv)
	{
		int sum=0;
		bool flag=true;
		for(size_t i=0;i!=17;++i)
		{
			if(isdigit(s[i]))
			{
				sum+=((s[i]-'0')*weight[i]);
			}
			else
			{
				cout<<s<<endl;
				flag=false;
				break;
			}
		}
		
		if(flag)
		{
			sum%=11;
			if(s[17]==check[sum])
				++ct;
			else
				cout<<s<<endl;
		}
	}
	
	if(ct==n)
		cout<<"All passed\n";
	return 0;
}
