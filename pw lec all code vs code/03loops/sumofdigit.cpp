#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,ld;
    cout<<"enter a digit : ";
    cin>>n;
while(n>0){
   ld=n%10;
    sum+=ld;
    n/=10;
}
cout<<sum;

}