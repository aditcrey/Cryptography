#include<bits/stdc++.h>
using namespace std;



string decipher(string s,string k){

int m = s.length();
int n = k.length();
string ans = "";
int j=0;
for(int i=0;i<m;i++){

int z = (s[i] - k[j%n])%26;
if(z<0) z+=26;
char a = z + 'A';
ans+=a;
j++;
}

return ans;

}

string vigenere(string s,int key[], int n){

int m = s.length();
string ans = "";
int j=0;
for(int i=0;i<m;i++){

char a = ((s[i] - 'A' + key[j])%26) + 'A';

ans+=a;
j++;
}

return ans;

}

void findKey(string encr, string z, vector<int> &key){

int m = encr.length();
int n = z.length();
for(int i=0;i<n;i++){
int l = encr[i] - z[i];
if(l<0) l+=26;
key.push_back(l);
}


}


int main(){

string s = "SENDMOREMONEY";
int key[] = {9,0,1,7,23,15,21,14,11,11,2,8,9};
string encr = vigenere(s,key,sizeof(key)/sizeof(key[0]));
//string decr = decipher(encr,k);
cout<<"Enciphered Text: "<<encr<<endl;
//cout<<"Deciphered Test: "<<decr<<endl;

string z = "CASHNOTNEEDED";
vector<int> ky;
findKey(encr,z,ky);
cout<<"Key for the plain text to be: "<<z<<endl;
for(int i=0;i<ky.size();i++) cout<<ky[i]<<" ";
cout<<endl;
return 0;
}
