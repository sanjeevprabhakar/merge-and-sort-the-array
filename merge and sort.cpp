/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arrone[3] = {2,3,8};
    
    int arrtwo[3] = {4,5,11};
    
    int arrthree[6];
    
    int min;
    
    int indexofmin;


    int k = 0;

for(int i = 0 ; i<3; i++)
{
    
    arrthree[i] = arrone[i];
}

for(int j = 3; j<6;j++)
{
    
    arrthree[j] = arrtwo[k];
    k++;
}

/*for(int l=0;l<6;l++)
{
    
    
    cout << arrthree[l]<<endl;
}
*/

min = arrthree[0];

for (int arrIndex = 0; arrIndex < 6; arrIndex++) {
    for (int i = arrIndex+1; i < 6; i++) {
        if (arrthree[i] <= arrthree[arrIndex]) {
            min = arrthree[i];
            indexofmin = i;
        
    
    int temp;
    temp = arrthree[indexofmin];
    arrthree[indexofmin] = arrthree[arrIndex];
    arrthree[arrIndex] = temp;
}

}

}


cout << "here is your sorted array";
    for (int m = 0; m < 6; m++)
    {
        cout << arrthree[m]<<endl;
    }

    return 0;
}







