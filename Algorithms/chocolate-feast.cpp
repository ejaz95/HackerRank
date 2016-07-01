/*
https://www.hackerrank.com/challenges/chocolate-feast
*/

#include<iostream>

using namespace std;

int main()
{
    int t,n,c,m,tmp,wraps;
    int ans = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>m;
        ans = n/c;
        wraps = ans;
        while(wraps >= m)
        {
            tmp = wraps/m;
            ans += tmp;
            wraps = tmp + wraps%m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
