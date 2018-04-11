#include<iostream>
#include<vector>
using namespace std;

class Vector 
{
public:
	void insert(vector<int> *,int);
	void disp(vector<int>);
};
void Vector::insert(vector<int> *vect,int data)
{
vect->push_back(data);
}
void Vector::disp(vector<int> vect)
{
vector<int> ::iterator itr;
    for (itr = vect.begin(); itr != vect.end(); ++itr)
        cout << *itr << '\t';
cout<<"size is \t"<<vect.size()<<endl;
}
int main()
{
Vector obj;
vector<int> vect;
obj.insert(&vect,10);
obj.insert(&vect,20);
obj.disp(vect);
return 0;
}

