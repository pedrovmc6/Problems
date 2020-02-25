#include <bits/stdc++.h>

using namespace std;

double v[110];

int main(){

    for(int i=0;i<=99;i++){
        cin>>v[i];
        }

        cout << fixed << setprecision(1);

    for(int i=0;i<=99;i++){
     if(v[i]<=10){
            cout<<"A["<<i<<"] = "<<v[i]<<"\n";
    }
    }

    return 0;
}
