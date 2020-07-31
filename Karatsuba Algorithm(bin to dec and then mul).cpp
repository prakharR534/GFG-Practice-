#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t-->0)
{
string str;
string str1;
cin>>str;
cin>>str1;
int k=str.length();
int s=str1.length();

long s1=0;
int l=0;
for(int i=k-1;i>=0;i--)
{
if(str[i]=='1')
s1=s1+pow(2,l);
l++;
}

long s2=0;
int p=0;
for(int i=s-1;i>=0;i--)
{
if(str1[i]=='1')
s2=s2+pow(2,p);

p++;
}
cout<<s1*s2<<endl; } return 0;}
