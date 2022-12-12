#include <bits/stdc++.h>

#define FASTIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define f(i, a, b) for (int(i) = (a); i < (b); i++)
#define fre(i, a, b) for (int(i) = (a); i >= (b); i--)
#define ll long long
#define vc(v, n) vector<char>(v)((n))
#define vi(v, n) vector<ll>(v)((n))
#define mp make_pair
using namespace std;

vector<ll> insp(8, 0);

pair<ll,ll> m0(ll a)
{   
    insp[0]++;
    a*=11;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%5==0) b=7;
    else b=4;
    return mp(a,b);
}

pair<ll,ll> m1(ll a)
{
    insp[1]++;
    a+=4;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%2==0) b=2;
    else b=6;
    return mp(a,b);
}

pair<ll,ll> m2(ll a)
{
    insp[2]++;
    a*=19;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%13==0) b=5;
    else b=0;
    return mp(a,b);
}

pair<ll,ll> m3(ll a)
{
    insp[3]++;
    ll c = a*a;
    a = c;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%7==0) b=6;
    else b=1;
    return mp(a,b);
}

pair<ll,ll> m4(ll a)
{
    insp[4]++;
    a+=1;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%19==0) b=3;
    else b=7;
    return mp(a,b);
}

pair<ll,ll> m5(ll a)
{
    insp[5]++;
    a+=3;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%11==0) b=0;
    else b=4;
    return mp(a,b);
}

pair<ll,ll> m6(ll a)
{   
    insp[6]++;
    a+=8;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%3==0) b=5;
    else b=2;
    return mp(a,b);
}

pair<ll,ll> m7(ll a)
{   
    insp[7]++;
    a+=7;
    //a/=3;
    a%=9699690;
    ll b;
    if(a%17==0) b=3;
    else b=1;
    return mp(a,b);
}

// pair<ll,int> m0(int a)
// {   
//     insp[0]++;
//     a*=19;
//     a/=3;
//     int b;
//     if(a%23==0) b=2;
//     else b=3;
//     return mp(a,b);
// }


// pair<int,int> m1(int a)
// {
//     insp[1]++;
//     a+=6;
//     a/=3;
//     int b;
//     if(a%19==0) b=2;
//     else b=0;
//     return mp(a,b);
// }

// pair<int,int> m2(int a)
// {   
//     insp[2]++;
//     a = a*a;
//     a/=3;
//     int b;
//     if(a%13==0) b=1;
//     else b=3;
//     return mp(a,b);
// }

// pair<int,int> m3(int a)
// {
//     insp[3]++;
//     a+=3;
//     a/=3;
//     int b;
//     if(a%17==0) b=0;
//     else b=1;
//     return mp(a,b);
// }


int main()
{
    std::ifstream stream;
    //stream.open("day11.txt");
    char o_in, p_in;
    std::string inp, s1, s2, t1, t2;
    vector<vector<ll>> v(8, vector<ll>());
    
    ll score = 0;
    v[0] = {61};
    v[1] = {76, 92, 53, 93, 79, 86, 81};
    v[2] = {91, 99};
    v[3] = {58, 67, 66};
    v[4] = {94, 54, 62, 73};
    v[5] = {59, 95, 51, 58, 58};
    v[6] = {87, 69, 92, 56, 91, 93, 88, 73};
    v[7] = {71, 57, 86, 67, 96, 95};
    
    // v[0] = {79, 98};
    // v[1] = {54, 65, 75, 74};
    // v[2] = {79, 60, 97};
    // v[3] = {74};
    cout << "Part 1: " << endl;
    f(i,0,10000)
    {
        f(j,0,8)
        {
            ll len = v[j].size();
            if(len==0) continue;
            while(v[j].size())
            {
                ll a = v[j][0];
                v[j].erase(v[j].begin());
                pair<ll,ll> p;
                if(j==0) p = m0(a);
                else if(j==1) p = m1(a);
                else if(j==2) p = m2(a);
                else if(j==3) p = m3(a);
                else if(j==4) p = m4(a);
                else if(j==5) p = m5(a);
                else if(j==6) p = m6(a);
                else if(j==7) p = m7(a);
                v[p.second].push_back(p.first);
            }

        }
        // f(j,0,8)
        // {
        //     cout<<j<<": ";
        //     f(k,0,v[j].size())
        //     {
        //         cout<<v[j][k]<<" ";
        //     }
        //     cout<<endl;
        // }

    }
    f(j,0,8)
    {
        cout << j << ":" << insp[j] << " " << endl;
    }

    sort(insp.begin(), insp.end());
    cout << insp[6]*insp[7] << endl;
    return 0;
}