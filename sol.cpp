#include <bits/stdc++.h>
using namespace std;
#define  int        long long int
const int N=1000001;
int32_t main()
{
    // dahjskcbjkabc
   
    int t;   cin>>t;
    assert(t<=10);
    assert(t>=1);
    while(t--){
        int fre[N]={0};
        int n;     cin>>n;
        int a[n];
        assert(n<=100000);
        assert(n>=1);
        for(int i=0;i<n;++i){
            cin>>a[i];
            assert(a[i]<=1000000);
            assert(a[i]>0);
        }
         
         // sasad
        sort(a,a+n);
        int s=0;
        for(int i=0;i<n;i++)
        {
            int d=fre[a[i]];
            int u=(d*(d-1))/2;
            s+=u;
            for(int j=a[i]+a[i];j<N;j+=a[i])
                fre[j]++;
        }
        assert(n<=100000);
        assert(n>=1);
        for(int i=0;i<n;++i){
            cin>>a[i];
            assert(a[i]<=1000000);
            assert(a[i]>0);
        }
        
    }
    //change 1
    return 0;
}
