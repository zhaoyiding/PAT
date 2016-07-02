#include<iostream>
#include<string>
#include<set>
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
	multiset<Person> pst;
	string n,b;
	int k;
	
	cin>>k;
	for(int i=0;i!=k;++i)
	{
		cin>>n>>b;
		if(b>="1814/09/06"&&b<="2014/09/06")
		{
			Person p(n,b);
			pst.insert(p);
		}
	}
	if(pst.size())
		cout<<pst.size()<<' '<<*pst.begin()<<' '<<*pst.rbegin()<<endl;
	else//�п���һ����Ч�Ķ�û�� 
		cout<<0<<endl;
	return 0;
}
