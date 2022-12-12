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
    stream.open("day5.txt");
    std::string inp;
    std::vector<std::vector<char>> v(9);
    int score = 0;
    v[0] = {'F', 'C' , 'P', 'G', 'Q', 'R'};
    v[1] = {'W', 'T', 'C', 'P'};
    v[2] = {'B', 'H', 'P', 'M', 'C'};
    v[3] = {'L', 'T', 'Q', 'S', 'M', 'P', 'R'};
    v[4] = {'P', 'H', 'J', 'Z', 'V', 'G', 'N'};
    v[5] = {'D', 'P', 'J'};
    v[6] = {'L', 'G', 'P', 'Z', 'F', 'J', 'T', 'R'};
    v[7] = {'N','L','H','C','F','P','T','J'};
    v[8] = {'G','V','Z','Q','H','T','C','W'};

    while(std::getline(stream, inp))
    {  
       //std::cout << inp << std::endl;
        std::stringstream ss(inp);
        int nos, stk1, stk2;
        std::string s1, s2, s3;
        ss >> s1 >> nos >> s2 >> stk1 >> s3 >> stk2;
        //std::cout << s1 << " " << nos << " " << s2 << " " << stk1 << " " << stk2 << std::endl;
        std::vector<char> v2(v[stk1-1].end()-nos, v[stk1-1].end());
        f(i,0,nos) v[stk1-1].pop_back();
        v[stk2-1].insert(v[stk2-1].end(), v2.begin(), v2.end());
    }
    //std::cout << score << std::endl;
    f(i,0,9)
    {
        std::cout << v[i][v[i].size()-1];
    }

}