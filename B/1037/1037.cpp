#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	replace(s1.begin(),s1.end(),'.',' ');
	replace(s2.begin(),s2.end(),'.',' ');
	istringstream is1(s1),is2(s2);
	int ptot,pgal,psic,pnut,atot,agal,asic,anut;
	
	is1>>pgal>>psic>>pnut;
	is2>>agal>>asic>>anut;
	ptot=pgal*29*17+psic*29+pnut;
	atot=agal*29*17+asic*29+anut;
	
	auto btot=atot-ptot;
	int bgal,bsic,bnut;
	bool flag=true;
	if(btot<0)
	{
		btot=0-btot;
		flag=false;
	}
	
	bgal=btot/(17*29);
	btot%=(17*29);
	bsic=btot/29;
	bnut=btot%29;
	
	if(flag)
		cout<<bgal<<'.'<<bsic<<'.'<<bnut<<endl;
	else
		cout<<'-'<<bgal<<'.'<<bsic<<'.'<<bnut<<endl;
	return 0;
}
