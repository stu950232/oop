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
int main()  
{  
    int N;  
    int num,halnum;  
    int sum=0;  
    int i,j,tmp;  
    int *mo;  
    //[input]  
    cin >> N;  
    for(i=0;i<N;i++)  
    {  
        cin >> num;  
        halnum=num/2;  
        mo=new int[num];  
        for(j=0;j<num;j++)  
        {  
            cin >> mo[j];  
        }  
          
        //qsort(mo,pokcnt,sizeof(mo[0]),cmpSMALL);  
        sort(mo,mo+num);  
        /*for(j=0;j<num;j++) 
        { 
            cout << mo[j]<<endl; 
        }*/  
        for(j=0;j<halnum;j++)  
        {  
            tmp=mo[num-1-j]-mo[j];  
            //cout<<tmp<<"====\n";  
            sum+=tmp;  
        }  
        cout<< sum<<endl;  
        sum=0;  
  
    }  
  
    //[output]  
    return 0;  
}  
