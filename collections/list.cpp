#include<iostream>
#include<list>
using namespace std;

class List
{
public:
	void insert(list<int> *,int);
	void disp(list<int>);
};
void List::insert(list<int> *vect,int data)
{
vect->push_back(data);
}
void List::disp(list<int> vect)
{
list<int> ::iterator itr;
    for (itr = vect.begin(); itr != vect.end(); ++itr)
        cout << *itr << '\t';
cout<<"size is \t"<<vect.size()<<endl;
}
int main()
{
List obj;
list<int> vect;
obj.insert(&vect,10);
obj.insert(&vect,20);
obj.disp(vect);
return 0;
}

