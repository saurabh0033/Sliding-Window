#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v={2,3,4,5,6,7,8};
    int k=3;
    int n=v.size();
    
    //-------------------------------------------------------------------------------------------------
    
    //  Approach-1;
    int sum=0,j=k,ans=INT_MIN,c=0;
    while(c<k){
        sum+=v[c];
        c++;
    }
    ans=max(ans,sum);
    cout<<ans<<endl;
    while(j<n){
      sum+=v[j]-v[j-k];
      ans=max(ans,sum);
      j++;
        //cout<<ans<<" ";
    }
    cout<<"answer is :"<<ans<<endl;
    
    //--------------------------------------------------------------------------------------------------
    
    //Approach-2
    int ans=INT_MIN;
    for(int i=0;i<=v.size()-k;i++){
        int j=0,sum=0;
        while(j<k){
            sum+=v[j];
            j++;
        }
        ans=max(ans,sum);
    }
     cout<<"answer is :"<<ans<<endl;
    //---------------------------------------------------------------------------------------------------
    
    //Approach-3
    int i=0,j=0,sum=0,ans=INT_MIN;
    while(j<n){
        sum+=v[j];
        if(j-i+1<k)j++;
        else if(j-i+1==k){
            ans=max(ans,sum);
            sum-=v[i];
            i++;
            j++;
        }
    }
    cout<<"Answer is :"<<ans<<endl;
    return 0;
    
}
