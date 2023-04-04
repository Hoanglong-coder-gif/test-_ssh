#include <iostream>
#include <string.h>
using namespace std;
int demsotu(char xau[], int dodai)
{
    int dem = 0;
    if (xau[0] !=' ') dem=1;
    for (int i = 0; i <= dodai - 1; i++)
    {
        if (xau[i] == ' ' && xau[i + 1] != ' ')
        {
            dem++;
        }
    }
    return dem;
}
void bai_5(char xau[],int dodai)
{
	for (int i = 0; i <= dodai - 1; i++)
    {
    	
        if (xau[i] != ' ' )
        {
            cout << xau[i];
            if (xau[i+1]==' ')
			{
            	cout<<endl;
			}
        }
    }
}
int main(){
	char xau[100];
	fflush(stdin);
	gets(xau);
	int dodai=strlen(xau);
	int sotu=demsotu(xau,dodai);
	cout << sotu;
	cout << endl;
	bai_5(xau,dodai);
	return 0;
}
