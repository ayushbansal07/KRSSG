#include<iostream>
#include<vector>
#include<stack>
#define F first
#define S second
using namespace std;

int main()
{
    int rows=5,cols=13;
    vector<vector<int> > area(rows,vector<int>(cols,1));
    vector<vector<int> > mark(rows,vector<int>(cols,0));
    vector<pair<pair<int,int>,int> > log;
    //pair<pair<int,int>,int> temp_log;
    pair<pair<int,int>,int> pt;

    area[0][2]=0;area[0][8]=0;area[0][9]=0;area[1][2]=0;area[1][8]=0;area[1][9]=0;
    area[2][2]=0;area[2][5]=0;area[2][8]=0;area[2][9]=0;area[3][5]=0;area[4][5]=0;

    stack<pair<pair<int,int>,int> > s;
    int hr=0;
    pt.F.F=0;
    pt.F.S=0;
    pt.S=hr;
    mark[pt.F.F][pt.F.S]=1;
    s.push(pt);
    while(1)
    {

        hr++;
        if(s.size()==0)
        {
            cout<<"Empty"<<endl;
            break;
        }
        pair<pair<int,int>,int> top_pt=s.top();
        s.pop();
        if(log.size()>0)
        {
            if(top_pt.S==log.back().S)
            {
                log.pop_back();
            }
        }
        log.push_back(top_pt);
        /*temp_log.F=top_pt;
        temp_log.S=hr;
        log.push_back(temp_log);*/
        //cout<<top_pt.F.F<<' '<<top_pt.F.S<<endl;
        if(top_pt.F.F==4 && top_pt.F.S==12)
        {
            cout<<"Found"<<endl;
            break;
        }
        int available=0;

        if(top_pt.F.S>=12)
        {
            for(int i=top_pt.F.F-1;i<top_pt.F.F+2;i++)
            {
                for(int j=top_pt.F.S+1;j>top_pt.F.S-2;j--)
                {
                    if(i>=0 && j>=0 && i<rows && j<cols)
                    {
                        if(area[i][j]==1 && mark[i][j]==0)
                        {
                            pt.F.F=i;
                            pt.F.S=j;
                            pt.S=hr;
                            s.push(pt);
                            mark[i][j]=1;
                            available++;
                        }
                    }

                }

            }

        }
        else
        {
            for(int i=top_pt.F.F-1;i<top_pt.F.F+2;i++)
            {
                for(int j=top_pt.F.S-1;j<top_pt.F.S+2;j++)
                {
                    if(i>=0 && j>=0 && i<rows && j<cols)
                    {
                        if(area[i][j]==1 && mark[i][j]==0)
                        {
                            pt.F.F=i;
                            pt.F.S=j;
                            pt.S=hr;
                            s.push(pt);
                            mark[i][j]=1;
                            available++;
                        }
                    }

                }

            }
        }


        if(available==0)
        {
            mark[top_pt.F.F][top_pt.F.S]=0;
            hr--;
            log.pop_back();
        }



    }

    cout<<"out"<<endl;
    for(int i=0;i<log.size();i++)
    {
        cout<<log[i].F.F<<' '<<log[i].F.S<<endl;
    }
}
