#include<bits/stdc++.h>
using namespace std;

int cmp(const void*a,const void*b);

int main(){
	int t,i,n,m,j;
	int*a=NULL;
	cin>>t;
	for(j=0;j<t;j++){
		cin>>n>>m;
		a=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		qsort(a,n,sizeof(a[0]),cmp);
		int min=abs(a[0]-a[1]);
		for(i=0;(a[i]+a[i+1]<=m)&&(i<n-1);i++){
			if(abs(a[i]-a[i+1])<min){
				min=abs(a[i]-a[i+1]);
			}
		}
		free(a);
		cout<<min<<endl;
	}
}



int cmp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
