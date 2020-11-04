
vector<string> generate(ll n)
{
	// Your code here
	queue<string>q;
	vector<string>v;
	string p;
	q.push("1");
	while(n--){
	   p= q.front();
	   v.push_back(p);
	   
	   q.pop();
	   q.push(p+'0');
	   q.push(p+'1');
	}
	
	return v;
}
