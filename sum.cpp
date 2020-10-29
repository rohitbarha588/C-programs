//This is a program to find the sum of all odd elements in an array

#include <bits/stdc++.h>
using namespace std;
int sum(int a[], int len);
int main()
{
int a[20], len, i;
scanf(“%d”, &len);
for(i=0; i<len; i++)
{
scanf(“%d”, &a[i]);
}
cout << sum(a, len);
return 0;
}
int sum(int a[], int len)
{
unordered_map<int, int> m;
for (int i = 0; i < len; i++)
m[a[i]]++;

int sum = 0;

for (auto itr = m.begin(); itr != m.end(); itr++) {

if (itr->second % 2 != 0)
sum += (itr->first) * (itr->second);
}
return sum;
}
