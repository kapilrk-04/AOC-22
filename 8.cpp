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
    std::ifstream stream;
    stream.open("day8.txt");
    char o_in, p_in;
    std::string inp, s1, s2, t1, t2;
    vector<vector<int>> v1;
    //vector<vector<int>> v;
    int score = 0;
    int y = 0;
    while(std::getline(stream, inp))
    {   
        //cout << inp << endl;
        //int in = stoi(inp);
        v1.push_back(vector<int>(0));
        f(i,0,inp.length())
        {
            if(inp[i] == ' ')
                continue;
            v1[y].push_back(inp[i] - '0');
        }
        y++;
    }
    int l = v1[0].size();
    int x = 1;
    f(i,1,y-1)
    {
        f(j,1,l-1)
        {   
            int scr = 1;
            int cnt = 0;
            //int sat = 0;
            for(int k = i-1; k >= 0; k--)
            {   
                cnt++;
                if(v1[i][j] > v1[k][j])
                {   
                    //cnt++;
                    continue;
                }
                else
                {   
                    //sat = 1;
                    break;
                }
            }
            cout << cnt << " ";
            scr *= cnt;
            cnt = 0;
            // if(!sat) 
            // {   
            //     score++;
            //     continue;
            // }

            //sat = 0;
            f(k,i+1,y)
            {   
                cnt++;
                if(v1[i][j] > v1[k][j]){
                    
                    continue;
                }
                else
                {   
                    //sat = 1;
                    break;
                }
            }
            cout << cnt << " ";

            scr *= cnt;
            cnt = 0;
            // if(!sat) 
            // {   
            //     //cout << endl "success" << endl;
            //     score++;
            //     continue;
            // }


            //sat = 0;
            for(int m = j-1; m >= 0; m--)
            {
                cnt++; 
                if(v1[i][j] > v1[i][m]){
                    
                    continue;
                }
                else
                {   
                    //sat = 1;
                    break;
                }
            }
            cout << cnt << " ";
            scr *= cnt;
            cnt = 0;
            // if(!sat) 
            // {   
            //     
            //     score++;
            //     continue;
            // }

            //sat = 0;
            f(m,j+1,l)
            {
                cnt++;  
                if(v1[i][j] > v1[i][m]){
                    
                    continue;
                }
                else
                {   
                    //sat = 1;
                    break;
                }
            }
            cout << cnt << " ";
            scr *= cnt;
            cnt = 0;
            // if(!sat) 
            // {   
            //     score++;
            //     continue;
            // }
            cout << scr << endl;
            score = max(score, scr);

        }
    }
    cout << score << endl;


}