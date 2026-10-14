// Double Enden Queue

#include <bits/stdc++.h>
using namespace std;

int main() {

    deque<int>d;

    d.push_back(1);
    d.push_back(2);


    d.push_front(3);
    d.push_front(4);


    for(int val : d)
    {
        cout<<val<< " ";
    }
    
    cout<<endl;


    d.pop_back();

    d.pop_front();

    for(int val : d)
    {
        cout<<val<< " ";
    }


    // Random Excess available

    cout<< d[2] <<endl;

    return 0;
}