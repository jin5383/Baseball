#include <vector>
#include <string>
#include <stdexcept>

using std::vector;
using std::string;


class baseball
{
public:

	vector<int> playgame(string str)
	{
		vector<int> result = {0,0};
		int i = 0;

		for (char ch : str)
		{
			if (ch < '0' || ch >'9')
				throw std::invalid_argument("");
			int j = 0;

			for (char ans : answer)
			{
				if (ch == ans)
				{
					if (i == j)
						result[0]++;
					else
						result[1]++;
				}

				j++;
			}

			i++;
		}

		if(str.length()>3)
			throw std::length_error("test");

		return result;		
	}

	string answer = "123";
};