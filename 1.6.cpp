/*essential c++ 第一张习题1.6*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> array;
	int elem;
	while (cin>>elem)
	{
		array.push_back(elem);
	}
	int sum = 0;
	for (vector<int>::iterator i = array.begin(); i != array.end(); ++i)
	{
		cout<<*i<<endl;
		sum += *i;
		/* code */
	}
	cout<<"The sum of array is "<<sum<<", The average is "<<sum/array.size()<<endl;
	/* code */
	return 0;
}