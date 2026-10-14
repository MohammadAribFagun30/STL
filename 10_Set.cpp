#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Set e shb "sorted" and "unique" value thakbe

    set<int> s = {1, 1, 2, 2, 4, 6, 7, 8, 5};

    for (auto u : s)
    {
        cout << u << " "; // 1 2 4 5 6 7 8
    }
    cout << endl;

    // With "Iterator"

    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.clear();

    cout << s.empty() << endl;

    // Isert value

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(3);

    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;

    cout << s.count(2) << endl;

    // 1st element
    cout << *s.begin() << endl;

    // last element
    cout << *(--s.end()) << endl;

    // erase
    cout << s.erase(3) << endl;

    s.erase(s.begin());

    s.erase(--s.end());

    //--------------------------------

    set<string> st;

    st.insert("Fagun");
    st.insert("Alif");
    st.insert("Tanvir");
    st.insert("balbab");
    st.insert("Ava");
    st.insert("Tanvir");
    st.insert("Albab");
    st.insert("Fagun");


    for(auto u : st)
    {
        cout<<u<<endl;
    }
    
    cout << endl;


    //--------------------------------


    set< pair<int, int> > p;

    p.insert( {2,3 } );
    p.insert( {4,1 } );
    p.insert( {5,3 } );
    p.insert( {7,5 } );
    p.insert( {2,3 } );
    p.insert( {3,2 } );
    p.insert( {1,5 } );

    for(auto u : p)
    {
        cout<< u.first << " " << u.second<<endl;
    }

    cout << endl;



    // Decreasing order

    set<int, greater<int> > d;

    d.insert(2);
    d.insert(3);
    d.insert(5);
    d.insert(1);

    for(auto u : d)
    {
        cout<<u<<endl;
    }


    set< pair<int , int> , greater< pair<int,int>> > dp;


    dp.insert( {2,3} );
    dp.insert( {2,5} );
    dp.insert( {1,2} );
    dp.insert( {4,2} );

    for(auto u : dp)
    {
        cout<< u.first << " " << u.second<<endl;
    }
   

    

    return 0;
}