#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void print(int n){
    if(n==11) return;
    if(n%2==0) cout<<n<<" ";
    print(n+=1);
}
int main(){
    print(1);
    return 0;
}
