#include<iostream>
#include<iomanip>
#include<list>
#include<string>
using namespace std;
typedef struct{
	char c;
	double odds;
}Node;
bool comp(const Node &l,const Node &r)
{
	return l.odds>r.odds;
}
int main()
{
	list<Node> l1,l2,l3;
	
	Node n1,n2,n3;
	n1.c='W';
	n2.c='T';
	n3.c='L';
	cin>>n1.odds>>n2.odds>>n3.odds;
	l1.push_back(n1);
	l1.push_back(n2);
	l1.push_back(n3);
	
	Node n4,n5,n6;
	n4.c='W';
	n5.c='T';
	n6.c='L';
	cin>>n4.odds>>n5.odds>>n6.odds;
	l2.push_back(n4);
	l2.push_back(n5);
	l2.push_back(n6);
	
	Node n7,n8,n9;
	n7.c='W';
	n8.c='T';
	n9.c='L';
	cin>>n7.odds>>n8.odds>>n9.odds;
	l3.push_back(n7);
	l3.push_back(n8);
	l3.push_back(n9);
	
	l1.sort(comp);
	l2.sort(comp);
	l3.sort(comp);
	
	auto sum=(l1.front().odds*l2.front().odds*l3.front().odds*0.65-1)*2;
	cout<<l1.front().c<<' '<<l2.front().c<<' '<<l3.front().c<<' '
		<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
