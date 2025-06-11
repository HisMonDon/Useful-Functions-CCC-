#include <bits/stdc++.h>
//you have to set up a vector first
using namespace std;
int getPrimeNumber(vector<int>&v, int numinline){
    if(v.size() >= numinline){
        return v[numinline-1];
    }
    if(v.size() == 0){
        v.push_back(2);
    }
    int recentnum = v.back() + 1;
    int range = numinline - v.size();
    bool isprime = true;
    for(int x = 0; x < range + 1; x++){
        while(true){
            for(int y = 0 ; y < v.size(); y++){
                if(recentnum % v[y] == 0){
                    isprime = false;
                    break;
                }
            }
            if(isprime){
                v.push_back(recentnum);
            } else {
                x -= 1;
            }
            recentnum ++;
            isprime = true;
            break;
        }
    }
    return v[numinline-1];
}
/*
example usage:
int main(){
    vector<int> primenumbers;
    int T;
    while(true){
        cin>>T;
        cout<<getPrimeNumber(primenumbers, T)<<endl;
    }
}
*/
