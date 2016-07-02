#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
class Person
{
	friend bool operator<(const Person &l,const Person &r)
	{
		return l.birth<r.birth;
	}
	friend ostream& operator<<(ostream &os,const Person &p)
	{
		os<<p.name;
		return os;
	}
	public:
		Person(const string &n,const string &b):
			name(n),birth(b){
			}
	private:
		string name,birth;
};
int main()
{
	list<Person> pst;
	int k;
	
	cin>>k;
	for(int i=0;i!=k;++i)
	{
		string n,b;
		cin>>n>>b;
		if(b>="1814/09/06"&&b<="2014/09/06")
		{
			Person p(n,b);
			pst.push_back(p);
		}
	}
	pst.sort();
	if(pst.size())
		cout<<pst.size()<<' '<<pst.front()<<' '<<pst.back()<<endl;
	else//有可能一个有效的都没有
		cout<<0<<endl;
	return 0;
}
