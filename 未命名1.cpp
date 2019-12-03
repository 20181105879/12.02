#include <iostream>
using namespace std;
long long  s[30050];
long long  ss[1050];
long long s1[30050];
int main(int argc, const char * argv[]) {
    
   // cout<<"sdg"<<endl;
    long long  n,m;
    cin>>n>>m;
    for(long i=0;i<m;i++)
    {
        long long t;
        cin>>t;
        for(long long j=0;j<t;j++)
        {
            cin>>ss[j];
            if(j==0)
            {
                if(s[ss[j]]==0)
                {
                    s[ss[0]]=ss[0];
                }
            }
            else
            {
                s[ss[j]]=ss[0];
                
            }

        }
    }
//    for(long long i=1;i<=n;i++)
//    {
//        cout<<s[i]<<endl;
//    }
    long long max=0;
    for(long long i=1;i<=n;i++)
    {
        s1[s[i]]++;
        if(s1[s[i]]>max)
        {
            max=s1[s[i]];
        }
        
    }
    if(m==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    cout<<max<<endl;
    
    
    
    
    
    
    
    return 0;
}

