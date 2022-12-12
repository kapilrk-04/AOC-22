#include <bits/stdc++.h>

#define FASTIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define f(i, a, b) for (int(i) = (a); i < (b); i++)
#define fre(i, a, b) for (int(i) = (a); i >= (b); i--)
#define int long long
#define vc(v, n) vector<char>(v)((n))
#define vi(v, n) vector<ll>(v)((n))

using namespace std;

int main()
{
    std::ifstream stream;
    stream.open("day6.txt");
    char o_in, p_in;
    std::string inp, s1, s2, t1, t2;
    std::vc(v1,0);
    int score = 0;
    while(std::getline(stream, inp))
    {   
        //cout << inp << endl;
        f(i,0,inp.length())
            v1.push_back(inp[i]);
    }
    
    queue<char> q, tmp, printq;

    f(i,0,v1.size())
    {
        int exists = 0;
        while(!tmp.empty())
        {
            o_in = tmp.front();
            tmp.pop();
            if(o_in == v1[i]){
                exists = 1;
                break;
            }
        }
        if(exists)
            q = tmp;
        else
            tmp = q;
        q.push(v1[i]);
        tmp.push(v1[i]);
        if(q.size() == 14){
            cout << i+1 << endl;
            break;
        }
        cout <<  q.size() << " | ";
        printq = q;
        queue<char> printtmp = tmp;
        while(!printq.empty())
        {
            cout << printq.front() << " ";
            printq.pop();
        }
        cout <<" | " << tmp.size() << " | ";
        while(!printtmp.empty())
        {
            cout << printtmp.front() << " ";
            printtmp.pop();
        }
        cout << endl;
        
    }

}