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
    stream.open("day4.txt");
    char o_in, p_in;
    std::string inp, s1, s2, t1, t2;
    int score = 0;
    while(std::getline(stream, inp))
    {   
        // int ss1, ss2, tt1, tt2;
        // std::string dl1 = ",";
        // std::string dl2 = "-";
        // std::string str1 = inp.substr(0, inp.find(dl1));
        // std::string str2 = inp.substr(inp.find(dl1)+1, inp.length());
        // s1 = str1.substr(0, str1.find(dl2));
        // s2 = str1.substr(str1.find(dl2)+1, str1.length());
        // t1 = str2.substr(0, str2.find(dl2));
        // t2 = str2.substr(str2.find(dl2)+1, str2.length());
        // ss1 = std::stoi(s1);
        // ss2 = std::stoi(s2);
        // tt1 = std::stoi(t1);
        // tt2 = std::stoi(t2);
        // std::cout << ss1 << " " << ss2 << std::endl << tt1 << " " << tt2 << std::endl;
        // if((tt1 >= ss1 && tt2 <= ss2) || (tt1 <= ss1 && tt2 >= ss2))
        // {   
        //     std::cout << "YES" << std::endl;
        //     score++;
        // }

        int ss1, ss2, tt1, tt2;
        std::string dl1 = ",";
        std::string dl2 = "-";
        std::string str1 = inp.substr(0, inp.find(dl1));
        std::string str2 = inp.substr(inp.find(dl1)+1, inp.length());
        s1 = str1.substr(0, str1.find(dl2));
        s2 = str1.substr(str1.find(dl2)+1, str1.length());
        t1 = str2.substr(0, str2.find(dl2));
        t2 = str2.substr(str2.find(dl2)+1, str2.length());
        ss1 = std::stoi(s1);
        ss2 = std::stoi(s2);
        tt1 = std::stoi(t1);
        tt2 = std::stoi(t2);
        std::cout << ss1 << " " << ss2 << std::endl << tt1 << " " << tt2 << std::endl;
        if((ss1 <= tt1 && ss2 >= tt1) || (ss1 >= tt1 && ss1 <= tt2))
        {   
            std::cout << "YES" << std::endl;
            score++;
        }

    }
    std::cout << score << std::endl;

}