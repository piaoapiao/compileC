#include <iostream>
using namespace std;

int stepSize = 1;

void increment(int  & number)
{
    number =  number + stepSize;
    
    return ;
    
}

int main()
{
    cout << "Hello, world!" << endl;
    increment(stepSize);
    cout << stepSize << endl;
    return 0;
}