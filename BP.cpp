#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float total;
float thisBP;


total = 0;
cout << "Enter a blood pressure (-1 to stop)";
cin >> thisBP;

while(thisBP != -1)
{
total = total + thisBP;
cout << "Enter a blood pressure (-1 to stop)";
cin >> thisBP;
}
cout << total << " is the total of BP";
return 0;
}

