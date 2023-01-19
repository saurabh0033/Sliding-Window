#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v={2,3,4,5,6,7,8};
    int k=3;
    int n=v.size();
    int sum=0,i=0,j=k,ans=INT_MIN,c=0;
    while(c<k){
        sum+=v[c];
        c++;
    }
    ans=max(ans,sum);
    cout<<ans<<endl;
    while(j<n){
        sum-=v[i];
        sum+=v[j];
        ans=max(sum,ans);
        i++;
        j++;
        cout<<ans<<" ";
    }
    cout<<"answer is :"<<ans<<endl;
    return 0;
    
}
