#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s;
	int sum=0;
	vector<string> sv={"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	cin>>s;
	for(auto c:s)
	{
		sum+=(c-'0');
	}
	
	auto res=to_string(sum);
	bool flag=1;
	for(auto c:res)
	{
		int k=c-'0';
		if(flag)
			flag=0;
		else
			cout<<' ';
		cout<<sv[k];
	}
	cout<<endl;
	return 0;
}
