#include<iostream>
using namespace std;
int main()
{
	int c1,c2;
	cin>>c1>>c2;
	int cd=c2-c1;
	int tot=cd/100;
	bool flag=(cd%100>=50?true:false);
	
	int hour=tot/3600;
	tot%=3600;
	if(hour<10)
		cout<<0<<hour;
	else
		cout<<hour;
	cout<<':';
	
	int min=tot/60;
	tot%=60;
	if(min<10)
		cout<<0<<min;
	else
		cout<<min;
	cout<<':';
	
	tot=flag?tot+1:tot;
	if(tot<10)
		cout<<0<<tot;
	else
		cout<<tot;
	cout<<endl;
	return 0;
}
