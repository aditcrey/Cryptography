#include<bits/stdc++.h>
using namespace std;

string encrypt(int k,string str){

int n = str.length();
string encr="";
for(int i=0;i<n;i++){
char a = str[i];
a = (((a - 'A') + k)%26) + 'A';
encr += a;
}



return encr;

}


string decrypt(int k,string str){

int n = str.length();
string decr="";
for(int i=0;i<n;i++){
char a = str[i];
a = (((a - 'A') -k)%26) + 'A';
if(a- 'A' <0 ) a+= 26;
decr += a;
}

return decr;

}

int main(){
string s;
cout<<"Enter string: ";
cin>>s;
string encr = encrypt(3,s);
cout<<"Encrypted string is: "<<encr<<endl;
string decr = decrypt(3,encr);
cout<<"Decrypted sting is: "<<decr<<endl;
return 0;
}
