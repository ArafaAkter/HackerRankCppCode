#include<bits/stdc++.h>
using namespace std;
int max_value(int a,int b,int c,int d)
{
   if(a>b && a>c && a>d)
        cout<<a;
   else if(b>a && b>c && b>d)
    cout<<b;
   else if (c>a && c>b && c>d)
    cout<<c;
   else
    cout<<d;
   return 0;


}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    max_value(a,b,c,d);

    return 0;
}


