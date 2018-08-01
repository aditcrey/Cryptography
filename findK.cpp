#include<bits/stdc++.h>
using namespace std;

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

void generateAllDecryptions(string str){
cout<<"Following decryptions are possible+++++++++++++++++++++++++++"<<endl;
string decr;
for(int k=1;k<26;k++){
	cout<<"k="<<k<<" "<<decrypt(k,str)<<endl;
}
}


int main(){




string s;
cout<<"Enter the encrypted text: ";
cin>>s;
generateAllDecryptions(s);

return 0;
}
