#include<bits/stdc++.h>
using namespace std;

void missingRepeating(vector<int> a, int* x, int* y, int n){

    int xor1;
    int set_bit;

    int i;
    *x = 0;
    *y = 0;

    xor1 = a[0];

    for(i = 1;i<n;i++){
        xor1 = xor1^a[i];
    }

    for(int i=1;i<=n;i++){
        xor1 = xor1^i;
    }

    set_bit = xor1 & ~(xor1 - 1);

    for(i = 0;i<n;i++){
        if(a[i] & set_bit){
            *x = *x^a[i];
        }
        else{
            *y = *y^a[i];
        }
    }

    for(i = 0;i<=n;i++){
        if(i & set_bit){
            *x = *x^i;
        }
        else{
            *y=*y^i;
        }
    }


}

int main(){

    vector<int>v;
    int n ,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    int *x = (int*)malloc(sizeof(int));
    int *y = (int*)malloc(sizeof(int));

    missingRepeating(v,x,y,n);

    cout<<"missing: "<<*y<<endl;
    cout<<"repeating: "<<*x<<endl;


    return 0;
}