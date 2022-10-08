// ordered map me search/insertion/deletion ka time complexity O(logn) hota hai 
// unordered map me search/insertion/deletion ka time complexity O(1) hota hai 

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string, int> m;

    // Insertion
    // method-1
    pair<string, int> pair1 = make_pair("prajapat", 3);
    m.insert(pair1);

    // method-2
    pair<string, int> pair2("rahul", 2);
    m.insert(pair2);

    // method-3
    m["piro"] = 1;

    // what will happen
    m["piro"] = 2; // it will update the previous entry


    // Search
    cout<<m["piro"]<<endl;
    cout<<m.at("prajapat")<<endl;


    // cout<<m.at("unknown_key")<<endl; it will show an error coz there is no entry with key unknown_key
    cout<<m["unknown_key"]<<endl; // it will create a new entry with key unknown_key and value 0
    cout<<m.at("unknown_key")<<endl;


    // Size
    cout<<"Size : "<<m.size()<<endl;

    // to check presence
    cout<<m.count("rahul")<<endl;   // it returns the boolean value 

    // erase
    m.erase("prajapat");
    cout<<"After erasing the size is : "<<m.size()<<endl;

    // traversal
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }


    // Traversal 
    unordered_map<string, int> :: iterator iter = m.begin();

    while(iter != m.end()){
        cout<<iter->first<<" "<<iter->second<<endl;
        iter++;
    }

    
    return 0;
}