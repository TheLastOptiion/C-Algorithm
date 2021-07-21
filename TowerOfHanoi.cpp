#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void toh(int n,int a,int b,int c) {
            static int cnt=1;
            if(n>0) {
            	toh(n-1,a,c,b);
            	 cout<<cnt<<". ("<<a<<" to "<<c<<")\n";
            	 cnt++;
            	toh(n-1,b,a,c); 
            }

}

int main() {

	 freopen("E:\\Comp-prog\\output.txt","w",stdout);
     toh(3,1,2,3);
	return 0;
}

