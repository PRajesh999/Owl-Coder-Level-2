//#Abundant number or not
//-----------------------
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<n;i++)
    {
       if(n%i==0) 
       {
            c+=i;
       }
    }
    if(c>n)
    {
        cout<<"True";
    } 
    else 
    {
        cout<<"False";
    }

}
