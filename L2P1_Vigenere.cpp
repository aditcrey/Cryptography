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

string vigenere(string s,string k){

int m = s.length();
int n = k.length();
string ans = "";
int j=0;
for(int i=0;i<m;i++){

char a = ((s[i] - 'A' + k[j%n] - 'A')%26) + 'A';
ans+=a;
j++;
}

return ans;

}




int main(){

string s = "LIFEISFULLOFSURPRISES", k="HEALTH";
string encr = vigenere(s,k);
string decr = decipher(encr,k);
cout<<"Enciphered Text: "<<encr<<endl;
cout<<"Deciphered Test: "<<decr<<endl;
return 0;
}
