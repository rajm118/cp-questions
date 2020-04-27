#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int k;
k=n;
//stage 1
cout<<"*";
for(int i=0;i<(n-3)/2;i++)
cout<<" ";
for(int i=0;i<=(n-1)/2;i++)
cout<<"*";
cout<<endl;
//stage 2
for(int i=0;i<(n-3)/2;i++)
{
    cout<<"*";
    for(int i=0;i<(n-3)/2;i++)
cout<<" ";
cout<<"*";
cout<<endl;
}
//stage 3
while(k)
{
    cout<<"*";
k--;
}
cout<<endl;
//stage 4
for(int q=0;q<((n-3)/2);q++)
{
    for(int j=0;j<=((n-3)/2);j++)
       { cout<<" ";
       }
cout<<"*";
for(int k=0;k<(n-3)/2;k++)
    {cout<<" ";
    }
cout<<"*"<<endl;
}
//stage 5
for(int i=0;i<=(n-1)/2;i++)
{cout<<"*";
 }  
for(int j=0;j<(n-3)/2;j++)
        cout<<" ";
cout<<"*"<<endl;



	return 0;
}
