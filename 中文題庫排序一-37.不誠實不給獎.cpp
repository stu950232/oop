#include <iostream>  
#include<fstream>  
#include <map>  
#include <queue>  
#include <utility>  
#include <climits>  
#include <functional>  
#include <iomanip>  
#include <stack>  
#include<cstring>  
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
    int N;  
    int *num;  
    int i,j,tmp;  
    //[input]  
    cin>>N;  
    num=new int[N];  
    for(i=0;i<N;i++)  
    {  
        cin>>tmp;  
        if(tmp%2==1)  
        {  
            num[i]=-1;  
        }  
        else{  
            num[i]=tmp;  
        }  
    }  
    sort(num,num+N,compare);  
    for(i=0;i<2;i++)  
    {  
        if(num[i]>=90)  
        {  
            cout<<num[i]<<endl;  
        }  
        else{  
            cout<<"x"<<endl;  
        }  
    }  
    return 0;  
}
