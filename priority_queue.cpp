#include<iostream>
#include<queue>
using namespace std;
typedef struct node
{
int i,
char ch;
float f;
}node;
int main()
{
priority_queue <node> pq;
node n1;

node arr[2];

arr[0].i=1;
arr[0].ch='a';
arr[0].f=1.0;


arr[1].i=2;
arr[1].ch='b';
arr[1].f=2.0;


pq.push(arr[0]);
pg.push(arr[1]);
cout<<"count is "<<pq.size()<<endl;
return 0;
}
