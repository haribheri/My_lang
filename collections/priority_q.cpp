#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

typedef struct node
{
  string name;
  int priority; 
}node;

class comparator
{
 public:
   bool operator()(const node& a, const node& b)
   {
        return a.priority<b.priority;
   }
};

int main()
{
   node arr[5];
   priority_queue<node, vector<node>, comparator> pq;

   for(int i=0; i<3; i++)
   {
     cin>>arr[i].name>>arr[i].priority;
     pq.push(arr[i]);
   }

   while (!pq.empty())
   {
     cout<<pq.top().name<<" "<<pq.top().priority;
     pq.pop();
     cout<<endl;
   }
   return 0;
}
