#include <bits/stdc++.h>
#define lli  long long int 

using namespace std;

const lli mod=1e9+7;
lli getHash(string key){

    lli value=0;
    // as if all char's are lower case then there is 26 character 
    // so prime no >26
    lli p=31;
    lli p_power=1;

    for(char ch:key){
        value=(value+(ch-'a'+1)*p_power)%mod;
        p_power=(p_power*p)%mod;
    }
    return value;
}

int main() {
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        cout<<getHash(s)<<endl;
    }
}
