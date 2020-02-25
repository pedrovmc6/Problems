#include <bits/stdc++.h>

using namespace std;

int x,v[100];

int main(){

    for(int i=0;i<=9;i++){
        cin>>v[i];

        if(v[i]<=0){
            v[i]=1;
        }

    }
    for(int i=0;i<=9;i++){
        cout<<"X["<<i<<"] = "<<v[i]<<"\n";

    }


    return 0;
}
