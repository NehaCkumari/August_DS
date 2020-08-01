#include<bits/stdc++.h>
using namespace std;
int main()
{
	string bracket="{[({()}]}";
	stack<char> s;
	bool flag=true;
	for(int i=0; i<bracket.size(); i++)
	{
		if(bracket[i]=='{' ||bracket[i]=='['||bracket[i]=='(')
			s.push(bracket[i]);
		else if(bracket[i]=='}'&& s.top()=='{')
			s.pop();
		else if(bracket[i]==']'&& s.top()=='[')
			s.pop();
		else if(bracket[i]==')'&& s.top()=='(')
			s.pop();
		else
			flag=false;
			
	}	
	if(flag)
		cout<<"Yayy, Parenthesis is balanced";
	else
		cout<<"Parenthesis is not balanced!";

	return 0;
}