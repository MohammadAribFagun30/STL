#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};

    for (int i : vec)
    {
        cout << i << " ";
    }


    //      size   element
    vector<int> vec2(3, 0); // 0 0 0



    vector<char> vec3 = {'a', 'b', 'c', 'd'};


    cout << endl;


    
    // Size of vector
    cout << "Size = " << vec.size() << endl;




    // Add element at last indext
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    for (int i : vec)
    {
        cout << i << " ";
    }

    cout << endl;




    // Delete last element
    vec.pop_back();

    for (int i : vec)
    {
        cout << i << " ";
    }



    cout << endl;



    // Print the 1st value
    cout << vec.front() << endl;



    cout << endl;


    
    // Print the last value
    cout << vec.back() << endl;




// Particular index value
cout<< vec.at(0) <<endl;
cout<< vec.at(1) <<endl;
cout<< vec.at(2) <<endl;



// Erase

vec.erase(vec.begin()); // erase 1st element





// Taking user input 

int n;
cout<<"Take the size of vector : ";
cin>>n;

vector<int>array;

for(int i=0; i<n; i++)
{
    int x;
    cin>>x;

    array.push_back(x);
}

for(int i=0; i<(int)array.size(); i++)
{
    cout<<array[i]<<" ";
}
    return 0;
}