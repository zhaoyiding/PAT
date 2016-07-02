#include<iostream>
#include<string>
using namespace std;
int main()
{
	int m;
	string id1,id2,min,max;
	
	cin>>m;
	cin>>id1>>min>>max;
	id2=id1;
	for(int i=0;i!=m-1;++i)
	{
		string id,in,out;
		cin>>id>>in>>out;
		if(in<min)
		{
			min=in;
			id1=id;
		}
		if(out>max)
		{
			max=out;
			id2=id;
		}
	}
	cout<<id1<<' '<<id2<<endl;
	return 0;
}
