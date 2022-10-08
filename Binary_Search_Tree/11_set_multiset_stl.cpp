// Ordered Set 
// --> Contains unique elements 
// --> Implemented using balanced BST
// --> Elements are in sorted order 
// --> Random access is not possible, i.e you cannot get i'th element in O(1)/O(Logn)
// --> Present in #include<set> header file
/*
#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    // print in reverse order
    for(auto i = s.rbegin(); i!=s.rend(); i++){
        cout<<*i<<" ";
    }cout<<endl;

    // size of the set
    cout<<s.size()<<endl;

    // Lower/upper_bound()
    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.lower_bound(3)<<endl;
    cout<<*s.upper_bound(3)<<endl;
    cout<<(s.upper_bound(5) == s.end())<<endl;

    // erase
    s.erase(2);
    s.erase(s.begin());
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
*/



// Multi Set 
// --> Can contain duplicates 
// --> Implemented using balanced BST
// --> Elements are in sorted order 
// --> Random access is not possible, i.e you cannot get i'th element in O(1)/O(Logn)
// --> Present in #include<set> header file
/*
#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    // size of the set
    cout<<s.size()<<endl;

    // erase
    // s.erase(3); // it will erase all the elemets with value 3
    s.erase(s.find(3)); // it will erase only one element with value 3
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
*/





// Unordered Set 
// --> Contain unique elements 
// --> Implemented using Hashing
// --> Elements are not in sorted order 
// --> Random access is not possible, i.e you cannot get i'th element in O(1)
// --> Present in #include<unordered_set> header file

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    // size of the set
    cout<<s.size()<<endl;

    // erase
    s.erase(2); 
    s.erase(s.begin());
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
