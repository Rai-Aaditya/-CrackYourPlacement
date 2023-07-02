// raiaditya's pc
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long minDiff=INT_MAX;
        long long i=0,j=0;
        while(j<n){
            if((j-i+1)<m){j++;}
            if(j-i+1==m){
                minDiff=min(minDiff,a[j]-a[i]);
                i++;
                j++;
            }
        }
    return minDiff;
    }   
};

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
