#include <iostream>
#define sum_of_rod_indeces 6 // start + end + other = sum_of_rod_indeces

using namespace std;

//---------------------------------------

void hanoi(int n, int start, int end )
{
    if(n <= 0 || (start >3 || start < 1) || (end > 3 || end < 1) || start == end)   return;

    if(n == 1){
        cout << start << "->" << end << endl;
    }
    else{
        int other = sum_of_rod_indeces - (start + end);
        hanoi(n-1,start,other);
        cout << start << "->" << end << endl;
        hanoi(n-1,other,end);
    }
}

//-------------------------------------------

int main()
{
    int n = 0, start = 0, end = 0;
    cin >> n >> start >> end;
    if(cin.fail())  return 0;
    hanoi(n,start,end);
}
