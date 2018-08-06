#include<bits/stdc++.h>
using namespace std;


void transpose(vector<int> &key, vector<int> &decKey){
vector<pair<int,int> > v;
for(int i=0;i<key.size();i++){
v.push_back(make_pair(key[i],i+1));
}

sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
cout<<v[i].second<<" ";
decKey.push_back(v[i].second);
}
}


int main(){
int arr[] = {3,2,6,1,5,4};
vector<int> key(arr,arr + sizeof(arr)/sizeof(arr[0])); 
vector<int> decKey;
transpose(key,decKey);

return 0;}
