#include <bits/stdc++.h>

using namespace std;
int main() {
	int array[100],n,i;
	cout << "ENTERNO.OFELEMENTS:";
	cin >> n;
	cout << "ENTERELEMENTS:";
	
	for(i=0;i<n;i++)
	{cin >> array[i];}
	cout << "ORIGINALARRAY:";
	
	for(int i=0;i<n;i++)
	cout <<array[i] << "";
	
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if (array[i] ==array[i])
{
cout <<"/nFIRST REPAETING INTEGER IS" << array[i];
return 0;
	}	
	cout << "NO\n" ;
	
	return 0;
}
