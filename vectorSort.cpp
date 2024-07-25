#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>v;
    int N;
    cin >>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<N;j++){
        cout<<v.at(j)<<" ";
    }


 return 0;

}
