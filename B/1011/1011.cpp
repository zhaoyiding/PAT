#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	vector<long long> lv;
	long long t;
	int n,k=1;
	
	cin>>n;
	while(cin>>t)
		lv.push_back(t);
	
	for(auto p=lv.cbegin();k<=n;++k,p+=3)
	{
		if(*p+*(p+1)>*(p+2))
			cout<<"Case #"<<k<<": true\n";
		else
			cout<<"Case #"<<k<<": false\n";
	}
	return 0;
}
