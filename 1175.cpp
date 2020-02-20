#include <bits/stdc++.h>

using namespace std;

double v[22];

int main(){
    int x=0;

    for(int i=0;i<=19;i++){
        cin>>v[i];
    }
    for(int i=19;i>=0;i--){
        cout<<"N["<<x<<"] = "<<v[i]<<"\n";
        x++;
    }


    return 0;
}
