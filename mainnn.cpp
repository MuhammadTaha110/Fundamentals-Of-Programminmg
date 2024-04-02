#include <iostream>
using namespace std ;

int main() {
{int i,j,n,s,t = 0;
cout << "ENTER N:";
cin >> n ;
 
 for (i=1;i<=n;i++)
 {s = 0 ;
 for (j=1 ; j<=i ; j++)
{ t += j;
 s+= j ;
 cout << j;
 if (j<i) 
 { cout <<"+" ; }
 }
 cout << "=" << s << endl;
 }
cout << "/nTHESUMOF=" <<t<<endl ;

}



	return 0;
}
