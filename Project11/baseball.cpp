#include <vector>
#include <string>

using std::vector;
using std::string;


class baseball
{
public:

	vector<int> playgame(string str)
	{
		vector<int> result = {};
		int n0 = str[0]-48;
		int n1 = str[1]-48;
		int n2 = str[2]-48;

		result = { 0,0 };
		return result;		
	}
};