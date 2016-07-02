#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<stack>
using namespace std;
void get_bits(int sum,stack<int> &ist)
{
	int n;
	
	while(1)
	{
		if(sum<10)
		{
			ist.push(sum);
			break;
		}
		else
		{
			n=sum%10;
			ist.push(n);
			sum/=10;
		}
	}
}
void output(stack<int> &ist,vector<string> &pinyin)
{
	int i;
	bool flag=true;
	
	while(!ist.empty())
	{
		i=ist.top();
		if(flag)
			flag=false;
		else
			cout<<' ';
		cout<<pinyin[i];
		ist.pop();
	}
}
int main()
{
	string s;
	vector<string> pinyin={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	stack<int> ist;
	int sum=0;
	
	cin>>s;
	for(auto c:s)
		sum+=(c-'0');
		
	get_bits(sum,ist);
	output(ist,pinyin);
	return 0;
}
