//Subarray with given sum
//Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
// 1 2 3 7 5and S=12
// big O(N square)
// indexing(1)
#include<bits/stdc++.h>
using namespace std;
int subarraysum(int arr[], int N, int S)
{
	for(int i=0; i<N; i++)
	{
		int sum=0;
		for(int j=i; j<N; j++)
		{
			sum=sum+arr[j];
			if(sum==S)
			{
			
				cout<<"The indeces are "<<i+1<<" and "<<j+1<<endl; 
				return 0;
			}
			if(sum>S)
				break;
		}
	}
	return -1;
}

// efficient solution for positive numbers
//big O(N)
int subarraypos(int arr[], int N, int S)
{
	int l=0,sum=0;
	for(int i=0; i<N; i++)
	{
		sum=sum+arr[i];
		if(sum>S)
		{
			sum=sum-arr[l];
			l++;
		}
		if(sum==S)
		{
			cout<<"The indeces are "<<l+1<<" and "<<i+1<<endl;
			return 0;
		}
	}
	return -1;
}

// for negative numbers O(N) time
int subarraneg(int arr[], int N, int S)
{
	map<int,int> m;
	int sum=0;
	for(int i=0; i<N; i++)
	{
		sum=sum+arr[i];
		if(sum==S)
		{	cout<<"The indeces are "<<0<<" and "<<i+1<<endl;
					return 0;}
		if(m.find(sum-S)!=m.end())
		{
			cout<<"The indeces are "<<m[sum-S]+2<<" and "<<i+1<<endl;
			return 0;
		}
		m[sum]=i;

	}
	return -1;
}

int main()
{
	int N=4,S=12;
	int arr[]={1,2,3,7};
	subarraysum(arr,N,S);
	subarraypos(arr,N,S);
	int arrr[]={1,-3,5,6,-1,-2};
	subarraneg(arrr,6,3);
	return 0;
}