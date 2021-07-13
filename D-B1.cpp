#include <iostream>
#include <math.h>
using namespace std;

int DecimalToBinary (int n){

int b=1;
int ans=0;
while (n>0)
{
    int c=n%2;
        n=n/2;
     ans = ans+c*b;
     b=b*10;
    
}
return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
}