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
    stream.open("day3.txt");
    char o_in, p_in;
    std::string inp, str1, str2, str3;
    std::map<char,int> m;
    std::vector<std::string> strs(3);
    m['A'] = 27; m['B'] = 28; m['C'] = 29; m['D'] = 30; m['E'] = 31; m['F'] = 32; m['G'] = 33; m['H'] = 34; m['I'] = 35; m['J'] = 36; m['K'] = 37; m['L'] = 38; m['M'] = 39; m['N'] = 40; m['O'] = 41; m['P'] = 42; m['Q'] = 43; m['R'] = 44; m['S'] = 45; m['T'] = 46; m['U'] = 47; m['V'] = 48; m['W'] = 49; m['X'] = 50; m['Y'] = 51; m['Z'] = 52;
    m['a'] = 1; m['b'] = 2; m['c'] = 3; m['d'] = 4; m['e'] = 5; m['f'] = 6; m['g'] = 7; m['h'] = 8; m['i'] = 9; m['j'] = 10; m['k'] = 11; m['l'] = 12; m['m'] = 13; m['n'] = 14; m['o'] = 15; m['p'] = 16; m['q'] = 17; m['r'] = 18; m['s'] = 19; m['t'] = 20; m['u'] = 21; m['v'] = 22; m['w'] = 23; m['x'] = 24; m['y'] = 25; m['z'] = 26;  
    int getter = -3;
    int score = 0;
    while(std::getline(stream, inp))
    {  
        // std::vi(v1,52);
        // std::vi(v2,52); 
        
        // int len = inp.length();
        // std::string str1 = inp.substr(0, len/2);
        // std::string str2 = inp.substr(len/2, len);
        // std::cout << str1 << " " << str2 << std::endl;
        // f(i,0,len/2)
        // {
        //     v1[m[str1[i]]-1]++;
        //     v2[m[str2[i]]-1]++;
        // }

        // f(i,0,52)
        // {  
        //     //std::cout << i+1 << " " << v1[i] << " " << v2[i] << std::endl;


        //     if(v2[i] != 0 && v1[i] != 0)
        //     {   
        //         score = score + i + 1;
        //     }
        // }
        // std::cout << score << std::endl;

        std::vi(v1,52);
        std::vi(v2,52); 
        std::vi(v3,52);
        if(getter < 0)
        {
            strs[3+getter] = inp;
            getter++;
        }

        if(getter == 0)
        {
            int len1 = strs[0].length();
            int len2 = strs[1].length();
            int len3 = strs[2].length();
            f(i,0,len1)
            {
                v1[m[strs[0][i]]-1]++;
            }
            f(i,0,len2)
            {
                v2[m[strs[1][i]]-1]++;
            }
            f(i,0,len3)
            {
                v3[m[strs[2][i]]-1]++;
            }
            f(i,0,52)
            {  
                //std::cout << i+1 << " " << v1[i] << " " << v2[i] << std::endl;
                if(v1[i] != 0 && v2[i] != 0 && v3[i] != 0)
                {   
                    score = score + i + 1;
                }
            }
            std::cout << score << std::endl;
            getter -= 3;
        }

        
    }
    std::cout << score << std::endl;

}