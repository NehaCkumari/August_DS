//Reverse words in a given string
//Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.
//input==i.like.this.program.very.much
//output==much.very.program.this.like.i
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string sentence="i.like.this.program.very.much";
	string word="";
	string rev="";
	for(int i=0; i<sentence.size(); i++)
	{	if(sentence[i]!='.')
			word=word+sentence[i];
		if(sentence[i]=='.')
		{	
			rev="."+word+rev;//.very.program.this.like.i
			word="";
		}
		if(i==sentence.size()-1)
		{
			rev=word+rev;
		}

	}
	cout<<rev;
	// time complexity is O(n)
	return 0;
}