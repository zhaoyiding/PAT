#include<iostream>
#include<iomanip>
#include<list>
using namespace std;
typedef struct{
	int e;
	double c;
}Node;
int main()
{
	list<Node> l1,l2,res;
	
	int n1;
	cin>>n1;
	for(int i=0;i!=n1;++i)
	{
		Node n;
		cin>>n.e>>n.c;
		l1.push_back(n);
	}
	
	int n2;
	cin>>n2;
	for(int i=0;i!=n2;++i)
	{
		Node n;
		cin>>n.e>>n.c;
		l2.push_back(n);
	}
	
	for(auto p=l1.begin();p!=l1.end();++p)
	{
		for(auto q=l2.begin();q!=l2.end();++q)
		{
			int e=p->e+q->e;
			double c=p->c*q->c;
			auto t=res.begin();
			for(;t!=res.end()&&t->e>e;++t)
				;
			if(t==res.end()||e>t->e)
			{
				Node n;
				n.e=e;
				n.c=c;
				res.insert(t,n);
			}
			else
			{
				if(c+t->c)
					t->c+=c;
				else
					res.erase(t);
			}
		}
	}
	
	bool flag=1;
	cout<<res.size()<<' ';
	for(auto &n:res)
	{
		if(flag)
			flag=0;
		else
			cout<<' ';
		cout<<fixed<<setprecision(1)<<n.e<<' '<<n.c;
	}
	cout<<endl;
	return 0;
}
