#include <bits/stdc++.h>
#define FASTIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define f(i, a, b) for (int(i) = (a); i < (b); i++)
#define fre(i, a, b) for (int(i) = (a); i >= (b); i--)
#define ll long long
#define vc(v, n) vector<char>(v)((n))
#define vi(v, n) vector<ll>(v)((n))

int main()
{
    std::ifstream stream;
    stream.open("day1.txt");
    std::string inp;
    std::vi(v,1);
    int nelems = 0;
    while(std::getline(stream, inp))
    {   
        if(inp == "") 
        {   
            std::cout << nelems+1 << "->" << v[nelems] << std::endl;
            v.push_back(0);
            nelems++;
        }
        else
        {
            int elem = std::stoi(inp);
            v[nelems] += elem;
        }
    }
    sort(v.begin(), v.end());
    std::cout << v[nelems]+v[nelems-1]+v[nelems-2] << std::endl; 

}