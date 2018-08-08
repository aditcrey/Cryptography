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




int main(){

string s = "SENDMOREMONEY";
int key[] = {9,0,1,7,23,15,21,14,11,11,2,8,9};
string encr = vigenere(s,key,sizeof(key)/sizeof(key[0]));
//string decr = decipher(encr,k);
cout<<"Enciphered Text: "<<encr<<endl;
//cout<<"Deciphered Test: "<<decr<<endl;
return 0;
}
