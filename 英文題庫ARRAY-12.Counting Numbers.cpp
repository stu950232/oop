#include <iostream>  
#include <utility>  
#include <climits>  
#include <functional>  
#include <iomanip>  
#include <stack>  
#include<cstring>  
#include<time.h>  
#include <vector>  
#include<string>  
#include<cmath>  
#include <algorithm>  
using namespace std;  
  
bool compare(int a, int b) {  
  return a > b;  
}  
int main()  
{  
    int a,b;  
    int i,j,cnt=0,sum,cnt2,tmp;  
    int num[50],*numcnt,*newnum;  
    //[input]  
    while(cin>>a)  
    {  
        if(a==-999)  
        break;  
        num[cnt]=a;  
        cnt++;  
    }  
    sort(num,num+cnt,compare);  
    /*for(i=0;i<cnt;i++) 
    { 
        cout<<num[i]<<endl; 
    } 
    cout<<"=====\n";*/  
    cnt2=1;  
    for(i=1;i<cnt;i++)  
    {  
        if(num[i]!=num[i-1])  
        {  
            cnt2++;  
        }  
    }  
      
    //cout<<cnt2<<endl;  
    tmp=0;  
    newnum=new int[cnt2];  
    numcnt=new int[cnt2];  
    for(i=0;i<cnt;i++)  
    {  
        if(i==0)  
        {  
            newnum[tmp]=num[i];  
            numcnt[tmp]=1;  
        }  
        else{  
            if(num[i]==num[i-1])  
            {  
                numcnt[tmp]+=1;  
                //tmp++;  
            }  
            else{  
                tmp++;  
                newnum[tmp]=num[i];  
                numcnt[tmp]=1;  
            }  
        }  
    }  
    for(i=0;i<cnt2;i++)  
    {  
        cout<<newnum[i]<<" "<<numcnt[i]<<endl;  
    }  
    //[output]  
    return 0;  
}  
