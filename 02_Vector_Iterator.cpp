#include <bits/stdc++.h>
using namespace std;

int main() {


    vector<int>vec{1,2,3,4,5};

    vector<int>:: iterator it;

    for(it = vec.begin(); it!=vec.end(); it++ )
    {
        cout<< *(it) <<" ";
    }



    // Reverse Iterator

    vector<int>:: reverse_iterator ite;

    for(ite = vec.rbegin(); ite !=vec.rend(); ite++ )
    {
        cout<< *(ite) <<" ";
    }

    
   
    // Short version--> do not need to write "vector<int>:: reverse_iterator ite;"

     for(auto ite = vec.rbegin(); ite !=vec.rend(); ite++ )
    {
        cout<< *(ite) <<" ";
    }


    return 0;
}