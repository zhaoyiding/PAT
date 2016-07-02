#include<iostream>
#include<iterator>
#include<vector>
#include<string>
using namespace std;
int main()
{
	istream_iterator<string> in(cin),eof;
	vector<string> sv(in,eof);
	
	bool flag=true;
	for(auto p=sv.crbegin();p!=sv.crend();++p)
	{
		if(flag)
			flag=false;
		else
			cout<<' ';
		cout<<*p;
	}
	cout<<endl;
	return 0;
}
