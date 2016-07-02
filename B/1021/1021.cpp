#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string num;
	
	cin>>num;
	for(int i=0;i!=10;++i)
	{
		char c='0'+i;
		auto n=count(num.begin(),num.end(),c);
		if(n)
			cout<<c<<':'<<n<<endl;
	}
	return 0;
}
