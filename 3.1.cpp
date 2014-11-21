#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	set<string> filter;
	string s[3] = {"a","the","is"};
	vector<string> f(s,s+3);
	filter.insert(f.begin(),f.end());
	map<string,int> words;
	ifstream infile("input.txt");
	if(!infile)
	{
		cout<<"Can't open file!\n";
		return 1;
	}
	else 
		while(!infile.eof())
		{
			string s;
			infile>>s;
			if(filter.count(s))
				continue;
			words[s]++;
		}
	infile.close();

	map<string,int>::iterator ite = words.begin();

	for(;ite != words.end();ite++)
		cout<<"Key: "<<ite->first<<"   Value: "<<ite->second<<endl;
	return 0;
}