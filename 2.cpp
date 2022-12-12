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
    stream.open("day2.txt");
    char o_in, p_in;
    std::string inp;
    std::vi(v,1);
    std::map<char, char> m1;
    m1['A'] = 'Y'; m1['B'] = 'Z'; m1['C'] = 'X'; 
    std::map<char, int> m2;
    m2['X'] = 1; m2['Y'] = 2; m2['Z'] = 3;
    int score = 0;
    while(std::getline(stream, inp))
    {   
        std::stringstream ss(inp);
        ss >> o_in >> p_in;
        //std::cout << o_in << " " << p_in << std::endl;
        if(p_in == 'X')
        {
            // score++;
            // if(o_in == 'A') score+=3;
            // else if(o_in == 'B') score+=0;
            // else if(o_in == 'C') score+=6;

            if(o_in == 'A') score+=3;
            else if(o_in == 'B') score+=1;
            else if(o_in == 'C') score+=2;
        }
        else if(p_in == 'Y')
        {
            // score+=2;
            // if(o_in == 'A') score+=6;
            // else if(o_in == 'B') score+=3;
            // else if(o_in == 'C') score+=0;

            score+=3;
            if(o_in == 'A') score+=1;
            else if(o_in == 'B') score+=2;
            else if(o_in == 'C') score+=3;
        }
        else if(p_in == 'Z')
        {
            // score+=3;
            // if(o_in == 'A') score+=0;
            // else if(o_in == 'B') score+=6;
            // else if(o_in == 'C') score+=3;

            score+=6;
            if(o_in == 'A') score+=2;
            else if(o_in == 'B') score+=3;
            else if(o_in == 'C') score+=1;
        }
    }
    std::cout << score << std::endl;

}