#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Hello this is STL in C++ tutorial"<<endl;
    return 0;
}


// unordered_set
//  #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     unordered_set<int> s;
//     for (int i = 1; i <= 10; i++)
//     {
//         s.insert(i);
//     }

//     cout << "Elements present in the unordered set: ";
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     int n = 2;
//     if (s.find(2) != s.end())
//         cout << n << " is present in unordered set" << endl;

//     s.erase(s.begin());
//     cout << "Elements after deleting the first element: ";
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "The size of the unordered set is: " << s.size() << endl;

//     if (s.empty() == false)
//         cout << "The unordered set is not empty " << endl;
//     else
//         cout << "The unordered set is empty" << endl;
//     s.clear();
//     cout << "Size of the unordered set after clearing all the elements: " << s.size();
// }


//Vector
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int> v;

//     for (int i = 0; i < 10; i++)
//     {
//         v.push_back(i); // inserting elements in the vector
//     }

//     cout << "the elements in the vector: ";
//     for (auto it = v.begin(); it != v.end(); it++)
//         cout << *it << " ";

//     cout << "\nThe front element of the vector: " << v.front();
//     cout << "\nThe last element of the vector: " << v.back();
//     cout << "\nThe size of the vector: " << v.size();
//     cout << "\nDeleting element from the end: " << v[v.size() - 1];
//     v.pop_back();

//     cout << "\nPrinting the vector after removing the last element:" << endl;
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";

//     cout << "\nInserting 5 at the beginning:" << endl;
//     v.insert(v.begin(), 5);
//     cout << "The first element is: " << v[0] << endl;
//     cout << "Erasing the first element" << endl;
//     v.erase(v.begin());
//     cout << "Now the first element is: " << v[0] << endl;

//     if (v.empty())
//         cout << "\nvector is empty";
//     else
//         cout << "\nvector is not empty" << endl;

//     v.clear();
//     cout << "Size of the vector after clearing the vector: " << v.size();
// }


//set
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     set<int> s;
//     for (int i = 1; i <= 10; i++)
//     {
//         s.insert(i);
//     }

//     cout << "Elements present in the set: ";
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     int n = 2;
//     if (s.find(2) != s.end())
//         cout << n << " is present in set" << endl;

//     s.erase(s.begin());
//     cout << "Elements after deleting the first element: ";
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     cout << "The size of the set is: " << s.size() << endl;

//     if (s.empty() == false)
//         cout << "The set is not empty " << endl;
//     else
//         cout << "The set is empty" << endl;
//     s.clear();
//     cout << "Size of the set after clearing all the elements: " << s.size();
// }


// unordered_multiset in C++ STL


// multiset in C++ STL


// unordered_map in C++ STL
// unordered_map<int,int>mp;

// map in C++ STL
// map<int,int>mp;


// unordered_multimap in C++ STL


// queue in C++ STL
// FIFO
// queue<int>q;


// stack in C++ STL
// LIFO
// stack<int>st;


// deque in C++ STL


// priority_queue in C++ STL
// queue in ascending order
// FIFO
// top most is greatest element
// {10,8,5,2}
// priority_queue<int>pq;


// multimap in C++ STL


// list in C++ STL
// list<int,int>li;


// next_permutation in STL
// gives all possible permutations of a given string
// string s = "213";
// sort(s.begin(),s.end());
// do{
//     cout<<s<<" ";
// }while(next_permutation(s.begin(),s.end()));


// __builtin_popcount() in STL
// count number of ones in a bit representation of a number
// int num = 7;
// int count1 = __builtin_popcount(num);
// count1 = 3;
// long long num = 1832829292929328388;
// int count1 = __builtin_popcountll(num);
// cout<<count1<<endl;


// sort() in C++ STL
// sort(arr.begin(),arr.end());
// sort the vector in ascending order by default
// reverse.sort(arr.begin(),arr.end());
// for sort in reverse form (descending order)


// min_element() in C++ STL
// int mie = *min_element(arr.begin(),arr.end());

// max_element() in C++ STL
// int mae = *max_element(arr.begin(),arr.end());