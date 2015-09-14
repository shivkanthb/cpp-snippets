#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<string> v;

	v.push_back("Hello");
	v.push_back("world");

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}

	cout<<"\n"<<v[1]<<endl;
	return 0;
}