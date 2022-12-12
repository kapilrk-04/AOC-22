#include <bits/stdc++.h>

#define FASTIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define f(i, a, b) for (int(i) = (a); i < (b); i++)
#define fre(i, a, b) for (int(i) = (a); i >= (b); i--)
#define ll long long
#define vc(v, n) vector<char>(v)((n))
#define vi(v, n) vector<ll>(v)((n))

using namespace std;

int main()
{
    std::ifstream stream("day10.in");
    char o_in, p_in;
    std::string inp, s1, s2, t1, t2;
    vector<int> v1;
    v1.push_back(0);
    vector<vector<char>> screen(6, vector<char>(40, '.'));
    //vector<vector<int>> v;
    int score = 0; int x = 1;
    int cycles = 0;
    //int desired = 20;
    f(i,0,145)
    {   
        string op;
        stream>>op;

        if(op == "addx")
        {   
            int num;
            stream >> num;
            v1.push_back(x);
            v1.push_back(x);
            x += num;
        }
        else
        {
            v1.push_back(x);
        }
        //cout << v1.size() << " " << x << endl;
        //cout << score << endl;
        // //cout << "cycles: " << cycles << " | x: " << x << endl;
        // if(cycles >= desired-1 && desired <= 220)
        // {  
        //     int olddesired = desired; 
        //     if(cycles == desired) x-=num;
        //     cout << endl << "cycles: " << cycles << " | desired: " << desired << " " << x << " - " << desired*x << endl;
        //     score += desired*x;
        //     if(cycles == olddesired) x+=num;
        //     if(desired <= 220) desired+=40;
            
        // }

    }
    for(int i=20; i<=220; i+=40)
    {   
        cout << i << " " << v1[i] << "-" << i*v1[i] << endl;
        score += i*v1[i];
    }
    cout << score << endl;

    int t=1;
    for(int i=0; i<6; i++)
    {   
        for(int j=0; j<40; j++)
        {   
            if(v1[t]-1 == j || v1[t] == j || v1[t]+1 == j) 
                cout << "#";
            else 
                cout << ".";
            t++;
        }
        cout << endl;
    }


}