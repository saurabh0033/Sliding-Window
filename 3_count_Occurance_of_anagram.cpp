#include<bits/stdc++.h>
using namespace std;
int main(){
 string pat="for";                              //input
 string txt="forxxorfxdofr";
  
 int k=pat.size();
 int i=0,j=0,ans=0;
  
 vector<int>v1(26,0);
 for(auto x:pat)v1[x-'a']++;
  
 vector<int>v2(26,0);
  
 while(j<txt.size()){
   
     v2[txt[j]-'a']++; //increasing freq of each character in txt;
   
     if(j-i+1<k)j++; //slide window   
     else if(j-i+1==k){
        if(v1==v2)ans++; //calculation
        v2[txt[i]-'a']--; //decrease freq of every 1st char in slide of txt;
        i++;
        j++;
     }
 }
 cout<<ans<<endl;
 return 0;
}
//op=3;
