#include <bits/stdc++.h>

using namespace std;

int main(){

// stack<int> s;
// s.push(2);
// s.push(5);
// s.push(6);

// s.pop();
// cout << s.top();

// while(!s.empty()){
// cout<<s.top()<<endl;
//  s.pop();
// }
map<int,int>mp;
mp[69]=43;
mp[35]=98;
mp[85]=13;
for (auto i :mp)
{
    /* code */
    cout<<i.first<<" "<<i.second<<endl;
}

set<int>st;
st.insert(90);
st.insert(47);
st.insert(67);
for (auto i :st)
{
    /* code */
    cout<<i<<endl;
}

int arr[5]={45,89,97,96,38};
sort(arr,arr+5);
for (auto i :arr)
{
    /* code */
    cout<<i<<endl;
}
vector<int>v;
v.push_back(23);
v.push_back(75);
v.push_back(60);
v.push_back(3);
sort(v.begin(),v.end());
for (auto i :v)
{
    /* code */
    cout<<i<<" ";
}
cout<<endl;
for (int i = 0; i < v.size(); i++)
{
    /* code */
    cout<<v[i]<<" ";
}




    return 0;
}