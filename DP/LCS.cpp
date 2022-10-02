#include<bits/stdc++.h>
using namespace std;

int lcshelpermemo(char *s1,char *s2,int m1,int m2,int **dp)
{
    int ans=0;
    if(m1==0 || m2==0)
    return 0;
    if(dp[m1][m2]!=-1)
    {
        return dp[m1][m2];
    }
    if(s1[0]==s2[0])
    {
        ans =1+lcshelpermemo(s1+1,s2+1,m1-1,m2-1,dp);
    }
    else{
        int ans1=lcshelpermemo(s1+1,s2,m1-1,m2,dp);
        int ans2=lcshelpermemo(s1,s2+1,m1,m2-1,dp);
        ans= max(ans1,ans2);
    }
    dp[m1][m2]=ans;
    return ans;

}
int lcs(char *s1,char *s2)
{
    int m=strlen(s1);
    int n=strlen(s2);
   int**dp=new int*[m+1];
   for(int i=0;i<m+1;i++)
   {
    dp[i]=new int[n+1];
    for(int j=0;j<n+1;j++)
    {
        dp[i][j]=-1;
    }
   }
   return lcshelpermemo(s1,s2,m,n,dp);
    
}

int lcsiterative(char *s1,char *s2)
{
     int m=strlen(s1);
    int n=strlen(s2);
   int**dp=new int*[m+1];
   for(int i=0;i<m+1;i++)
   {
    dp[i]=new int[n+1];
    
   }
   for(int i=0;i<m+1;i++)
   {
    dp[i][0]=0;
   }
   for(int i=0;i<n+1;i++)
   {
    dp[0][i]=0;
   }
   for(int i=1;i<m+1;i++)
   {
    for(int j=1;j<n+1;j++)
    {
        //here dp[i][j] means i characters remaining from s1 and j characters remaining from s2
        if(s1[m-i]==s2[n-j])
        {
            dp[i][j]=1+dp[i-1][j-1];
        }
        else
        {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
   }
   return dp[m][n];
}

int main()
{
    char s1[10];
    char s2[10];

    cout<<"enter :";
    cin>>s1>>s2;

    cout<<lcs(s1,s2)<<endl;
    cout<<lcsiterative(s1,s2);
}