#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    //v={-1,0,3,-1,-4,-5,6,7,8};//op={-1,-1,-1,-1,-4,-5,0}
    v={12,-1,-7,8,-15,30,13,28};
    int k=3;
    int n=v.size();
    
    
    //--------------------------------------------
    //Approach-1
    vector<int>ans(n-k+1,0);
    for(int i=0;i<=n-k;i++){
        int j=0;
        while(j<j+k){
            if(v[j]<0){
                ans[i]=v[j];
                break;
            }
            j++;
        }
    }
    
    //---------------------------------------------
    //Approach-2
    vector<int>ans;
    deque<int>d;
    int i=0,j=0;
    while(j<n){
        if(v[j]<0){
            d.push_back(v[j]);
        }
        
        if(j-i+1 <k){
            j++;
            continue;
        }
        else if(j-i+1==k){
            if(d.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(d.front());
            }
            if(v[i]<0){
                d.pop_front();
            }
            i++;
        }
        j++;
    }
    for(auto x:ans)cout<<x<<" ";
    return 0;
}
