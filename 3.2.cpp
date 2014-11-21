#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> text, odd, even;
	istream_iterator<int> is(cin);
	istream_iterator<int> eof;
	copy(is, eof, back_inserter(text));
	ofstream outfile_even("even.txt");
	if(!outfile_even)
	{
		cout<<"Can't open the file !\n";
		return 1;
	}
	ofstream outfile_odd("odd.txt");
	if(!outfile_odd)
	{
		cout<<"Can's open the file!\n";
		return 1;
	}
	for(vector<int>::iterator ite = text.begin(); ite != text.end(); ite++)
	{
		if((*ite) % 2 != 0)
			odd.push_back(*ite);
		else
			even.push_back(*ite);
	}
	ostream_iterator<int> os_even(outfile_even," ");
	ostream_iterator<int> os_odd(outfile_odd," ");

	copy(even.begin(),even.end(),os_even);
	copy(odd.begin(),odd.end(),os_odd);

	return 0;
}