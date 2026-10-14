#include <bits/stdc++.h>
using namespace std;
int main(){

stack<int>s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);

while(!s.empty())
{
    cout<< s.top()<<" ";
    s.pop();
}

cout<<endl;



stack<int>s2;

s2.swap(s);

while(!s2.empty())
{
    cout<< s.top()<<" ";
    s2.pop();
}



return 0;

}

