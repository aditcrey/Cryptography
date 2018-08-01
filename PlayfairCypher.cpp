//Playfair cypher
#include<bits/stdc++.h>
using namespace std;
char mat[5][5];

void findPositions(char first,char second, int &c1,int &r1,int &c2,int &r2){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(mat[i][j]==first){
				c1 = i;r1=j;
			}
			if(mat[i][j] ==second){
				c2 = i;r2 = j;
			}
		}
	}
}


string decrypt(string str,string key){

set<int> st;
for(int i=0;i<key.length();i++){
	st.insert(key[i]);
}


int len = key.length();
int z = 0;

int alpha = 0;

for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
	if(z<len) {
		mat[i][j] = key[z];
		z++;
	}else{
		while(st.find('a' + alpha)!=st.end()) alpha++;
		if(alpha==8) alpha++;  //when the character is i  //we print j in case of i/j 
		mat[i][j] = 'a' + alpha;
		alpha++;
	}
}
}

//printing matrix
cout<<"The playfair matrix is: "<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cout<<mat[i][j]<<" ";
}
cout<<endl;
}


//encrypting the str 
int n = str.length();
for(int i=0;i<n;i++){
	char first,second;
	if(str[i+1]=='\0') second = 'x';
	first = str[i];
	if(second!='x') second = str[i+1];
	int c1,r1,c2,r2;
	findPositions(first,second,c1,r1,c2,r2);
	
	//case 1: both first and second are equal
	
}

return "aditya";


}




int main(){

string key = "monarchy";
string s ="BV";
string encr = decrypt(s,key);


return 0;
}
