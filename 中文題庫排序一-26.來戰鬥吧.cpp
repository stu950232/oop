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
    int N;  
    int pokcnt;  
    int i,j,tmp;  
    int mowin=0,jwin=0;  
    int *mo,*J;  
    //[input]  
    cin >> N;  
    for(i=0;i<N;i++)  
    {  
        cin >> pokcnt;  
        mo=new int[pokcnt];  
        J=new int[pokcnt];  
        for(j=0;j<pokcnt;j++)  
        {  
            cin >> J[j];  
        }  
        for(j=0;j<pokcnt;j++)  
        {  
            cin >> mo[j];  
        }  
          
        //qsort(mo,pokcnt,sizeof(mo[0]),cmpSMALL);  
        sort(mo,mo+pokcnt);  
        sort(J,J+pokcnt,compare);  
        /*for(j=0;j<pokcnt;j++) 
        { 
            cout << J[j]<<endl; 
        }*/  
        for(j=0;j<pokcnt;j++)  
        {  
            if(J[j]>mo[j])  
            {  
                jwin++;  
            }  
            else if(J[j]<mo[j])  
            {  
                mowin++;  
            }  
        }  
        cout<< jwin<<" "<< mowin<<endl;  
        jwin=0;  
        mowin=0;  
  
    }  
  
    //[output]  
    return 0;  
}
