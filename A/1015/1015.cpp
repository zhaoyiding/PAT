#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
using namespace std;
bool isPrime(int n)
{
	if(n%2)
	{
		if(1==n)
			return 0;
		else
		{
			int i=3;
			for(;i*i<=n;i+=2)
			{
				if(n%i==0)
					break;
			}
			if(i*i>n)
				return 1;
			else
				return 0;
		}
	}
	else
	{
		if(2==n)
			return 1;
		else
			return 0;
	}
}
int change(int n,int d)
{
	stack<int> ist;
	
	for(;n>=d;n/=d)
	{
		int bit=n%d;
		ist.push(bit);
	}
	ist.push(n);
	
	int res=0;
	for(int i=0;!ist.empty();++i)
	{
		int j=ist.top();
		ist.pop();
		res+=(j*pow(d,i));
	}
	return res;
}
int main()
{
	vector<string> ans;
	
	while(1)
	{
		int n1,d;
		bool flag1=0,flag2=0;
		cin>>n1;
		if(n1<0)
			break;
		cin>>d;
		int n2=change(n1,d);
			
		if(isPrime(n1)&&isPrime(n2))
			ans.push_back("Yes");
		else
			ans.push_back("No");
	}
	
	for(auto &s:ans)
		cout<<s<<endl;

	return 0;
}
