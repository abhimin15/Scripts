#include<bits/stdc++.h>
using namespace std;

int main(){
    float x1,y1;
    cin>>x1>>y1;
    float x2,y2;
    cin>>x2>>y2;
    float m,c;
    m = -(x2-x1)/(y2-y1);
    c = y2 - (x2*m);
    cout<<m<<endl;
    cout<<c<<endl;
    return 0;
    
}