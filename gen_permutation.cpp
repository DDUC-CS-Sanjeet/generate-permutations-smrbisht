#include<iostream>
using namespace std;
void permute(char a[],int s,int num)
{
 if(s==num)
 {
 	cout<<a<<endl;
 }
 else
 {
 	for(int i=s;i<=num;i++)
 	{
 		swap(a[s],a[i]);
 		permute(a,s+1,num);
 		swap(a[s],a[i]);
	 }
 }
}
int main()
{
	int num;
	cout<<" ENTER NUMBER OF CHARACTERS ";
	cin>>num;
	char a[num+1];
	for(int i=0;i<num;i++)
	{
		a[i]='a'+i;
	}
	a[num]='\0';
	cout<<" NUMBER OF POSSIBLE PERMUTATION :\n";
    permute(a,0,num-1);
	return 0;
}
