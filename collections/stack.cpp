#include<iostream>
#include<stack>
using namespace std;


class Stack
{
	public:
		void insert(stack<int> *,int);
		void disp(stack<int>);
};
void Stack::insert(stack<int> *s,int data)
{
	s->push(data);
}
void Stack::disp(stack<int> s)
{
	while(!s.empty())
	{
		cout<<"val is "<<s.top()<<endl;
			s.pop();
	}
	
//	for(itr=s.begin();itr!=itr.end();itr++)
	//	cout<<*itr;

	cout<<"size is "<<s.size()<<endl;
	if(!s.empty())
	cout<<"top is "<<s.top()<<endl;
}

int main()
{
	Stack obj;
	stack<int> s;
	obj.insert(&s,1);
	obj.insert(&s,2);
	obj.disp(s);
	return 0;
}
