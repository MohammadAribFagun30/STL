#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int , int> p = {1,5};

    cout<<p.first<<endl;
    cout<<p.second<<endl;
 

 cout<<"----"<<endl;

    pair<string , int> p2 = {"Fagun",5};

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;



 cout<<"----"<<endl;

    // Pair in Pair

    pair<int , pair<char,int> > p3={30 , {'a',5}};

    cout<<p3.first<<endl;
    cout<<p3.second.first<<endl;
    cout<<p3.second.second<<endl;


    cout<<"----"<<endl;



    // Pair in Vector

    vector< pair<int, int> > vec = {{1,2}, {3,4}, {5,6}};

    for(pair<int, int> p : vec)
    {
        cout<<p.first<< " " <<p.second<<endl;
    }




    cout<<"----"<<endl;;



    // or
    for(auto p : vec)
    {
        cout<<p.first<< " " <<p.second<<endl;
    }



    cout << "----" << endl;


    // Insert

    vec.push_back({7,8});



    // Or

    vec.emplace_back(9,10); // Creates pair for us automatically



    for(auto p : vec)
    {
        cout<<p.first<< " " <<p.second<<endl;
    }


    cout << "----" << endl;



    pair<string, vector<int>> p4;


    p4.first = "Fagun";

    p4.second = {1, 2, 3} ;

    cout << p4.first << endl;

    for( auto p : p4.second)
    {
        cout << p <<" ";
    }
    cout<<endl;

 

    cout<<"---"<<endl;



    // Make_Pair

     pair< int, int > p5;

     p5 = make_pair(2,3);

     cout<< p5.first << " " << p5.second <<endl;

     p5.first++;
     p5.second--;

     cout<< p5.first << " " << p5.second <<endl;



     cout << "----" << endl;



    // Compare
     pair<int, int> f1,f2;

     f1 = {3,5}; 
     f2 = {1,6};

     pair<int, int> f3 = min(f1,f2);

     cout<< f3.first << " " << f3.second <<endl;


     cout<<"---"<<endl;

    // Array of pair

    pair<int,int> p6[] = {
    {3, 2},
    {8, 4},
    {5, 6}

    };

    sort(p6, p6 + 3);

    for( int i=0; i<3; i++)
    {
        cout<< p6[i].first << " "<<p6[i].second<<endl;
        
    }


    cout<<"---"<<endl;



    // Get Unique pair

    vector< pair<string, int> > v;

    v.push_back( {"Arib",25} );
    v.push_back( {"Fagun",30} );
    v.push_back( {"Alif",69} );
    v.push_back( {"Albab",65} );
    v.push_back( {"Arib",25} );


    sort(v.begin() , v.end());

 /*------>*/   int size = unique(v.begin() , v.end()) - v.begin();


    for(int i=0; i<size; i++)
    {
        cout<< v[i].first << " "<< v[i].second<<endl;
    }


    return 0;
}