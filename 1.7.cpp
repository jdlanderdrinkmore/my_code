#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> str;
	string s;
	ifstream infile("text.txt");
	if (!infile)
	{
		cout<<"Cant open file \"text.txt\" !\n";
		return -1;
	}
	else 
		while(!infile.eof())      //将infile != '\0'替换成 !infile.eof()  解决问题  //这里有问题，文件最后一个字符串会被读入两次！！！
		
			infile>>s;
			//cout<<" "<<(string)*infile<<" ";            
			cout<<" "<<s<<" ";
			str.push_back(s);
		}
	for (vector<string>::iterator ite = str.begin(); ite != str.end(); ++ite)
	{
		cout<<*ite<<" ";
	}

	ofstream outfile("aftersort.txt");
	sort(str.begin(),str.end());
/*	cout<<"\nThe string after sort: \n";
	for (vector<string>::iterator ite = str.begin(); ite != str.end(); ++ite)
	{
		cout<<*ite<<" ";
	}*/
	if (!outfile)
	{
		cout<<"Cant open or new the file!\n";
		return -1;
	}
	else
	{
		for(vector<string>::iterator ite = str.begin(); ite != str.end(); ++ite)
			outfile<<*ite<<" ";
	}
	cout<<endl;
	return 0;
}