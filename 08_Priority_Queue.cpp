#include <bits/stdc++.h>
using namespace std;

int main() {
    
     priority_queue<int> q;

     priority_queue<int, vector<int>, greater<int>> q; // This will print --> 1 2 3 4

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);


    
    while(!q.empty())
    {
        cout<< q.top()<<" ";  // 4 3 2 1
        q.pop();
    }





    return 0;
}