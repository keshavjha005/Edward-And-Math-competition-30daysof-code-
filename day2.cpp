#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin>>n;
    int even=0, odd=0;

for(int i=1;i<=n; i++){
    if(i%2==0)
    even++;
else
odd++;
}
    cout<<even*odd;
    
    return 0;
}