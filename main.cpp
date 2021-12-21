#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    vector<long long int> a,b,c;
    vector<long long int> fun_a,fun_b,fun_c;

    cin>>N;
    for (int i = 0; i < N; i++)
    {
        long long int temp;
        cin>>temp;
        a.push_back(temp);
        cin>>temp;
        b.push_back(temp);
        cin>>temp;
        c.push_back(temp);
    }

    fun_a.push_back(a[0]);
    fun_b.push_back(b[0]);
    fun_c.push_back(c[0]);

    for (int i = 1; i < N; i++)
    {
        fun_a.push_back(max(a[i]+fun_b[i-1],a[i]+fun_c[i-1]));
        fun_b.push_back(max(b[i]+fun_a[i-1],b[i]+fun_c[i-1]));
        fun_c.push_back(max(c[i]+fun_b[i-1],c[i]+fun_a[i-1]));
    }
    
    long long int temp1 = max(fun_a[N-1],fun_b[N-1]);
    cout<<max(temp1,fun_c[N-1]);
    
    return 0;
}