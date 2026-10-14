#include <bits/stdc++.h>
using namespace std;

int main() {


    map<string , int> m;

    m["tv"] = 100;
    m["mbl"] =20 ;
    m["light"] =30 ;
    m["bell"] = 50;

    m.insert( {"camera" , 60} );


    cout << "----" << endl;

// Individual value print
    cout << " Value : " << m["light"]<< endl;

// Whole map
    for(auto p : m)
    {
        cout<<p.first << " " << p.second << endl; // print assending order on string 1st char
    }
 
   cout << "----" << endl;

    if( m.find("bell") != m.end())
    {
        cout << "Found !" << endl;
    }

    else 
    {
        cout << "Not Found !" << endl;
    }


    cout << "----" << endl;

    cout << "Count : " << m.count("bell")<< endl;


    cout << "----" << endl;




    // Unique value

    map<int,bool> cnt;

    vector<int> v = {1,2,3,2,1};

    for(auto u : v) cnt[u] = 1;

    for(auto u : cnt) 
    {
        cout<< u.first << " " << u.second << endl;
    }

    
 cout << "----" << endl;



    map<int, int> c;

    vector<int> o = {1,2,3,1,5,2,3,1,6};

   
    for(auto u : o)
    {
        c[u]++;
    }

    for(auto u : c)
    {
        cout<< u.first<<" "<<u.second<<endl;
    }
    return 0;
}