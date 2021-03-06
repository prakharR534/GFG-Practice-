// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_pair(vector<pair<string,pair<int,int> > > &A,string str,int x,int y);
int get_size(vector<pair<string,pair<int,int> > > &A);

void print_values(vector<pair<string,pair<int,int> > > &A);

void sort_pair(vector<pair<string,pair<int,int> > > &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<string,pair<int,int> > > A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				string name;
				cin>>name;
				int x,y;
				cin>>x>>y;
				add_pair(A,name,x,y);
			}
			if(c=='b')
			{
				cout<<get_size(A)<<" ";
			}
			if(c=='c')
			{
				print_values(A);
			}
			if(c=='d')
			{
			 	sort_pair(A);
			}
		
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     A.push_back(make_pair(str,make_pair(x,y)));// Your code here
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     return A.size();// Your code here
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for(int i=0;i<A.size();i++){
         cout<<A[i].first<<" "<<A[i].second.first<<" "<<A[i].second.second<<" ";
     }// Your code here
}

bool cmp(pair<string,pair<int,int> > a,pair<string,pair<int,int> >  b)
{
	if(a.second.first<b.second.first)
	return 1;
	if(a.second.first==b.second.first and a.second.second<b.second.second)
	return 1;
	else
	return 0;
}

/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     sort(A.begin(), A.end(), cmp);// Your code here
}

