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
using namespace std;  
  
int main()  
{  
    double *num,max,min;  
    int N;  
    int i,j,tmp;  
    //[input]  
    cin >> N;  
    num=new double[N];  
    for(i=0;i<N;i=i+1)  
    {  
        cin >> num[i];  
    }  
    max=num[0];  
    min=num[0];  
    //[sort]  
    for(i=0;i<N;i=i+1)  
    {  
        if(num[i]>max)  
        {  
            max=num[i];  
        }  
        if(num[i]<min)  
        {  
            min=num[i];  
        }  
    }  
  
    //[output]  
    cout<< fixed <<setprecision(2)<<max<<"\n"<<min<<endl;  
  
    return 0;  
}
