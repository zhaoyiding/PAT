#include<iostream>
using namespace std;
int main()
{
	int c,e;
	bool flag_zero=true,flag_out=true;
	
	while(cin>>c>>e)
	{
		if(e)
		{
			c*=e;
			e-=1;
			flag_zero=false;
			if(flag_out)
				flag_out=false;
			else
				cout<<' ';
			cout<<c<<' '<<e;	
		}
		else
		{
			if(flag_zero)
				cout<<"0 0";
		}
	}
	cout<<endl;
	return 0;
}
