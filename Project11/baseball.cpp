#include <vector>
#include <string>
#include <stdexcept>

using std::vector;
using std::string;


class baseball
{
public:

	explicit baseball(string answer = "123") : answer(std::move(answer)) {}

	vector<int> playgame(const string& guess) const
	{
		if (guess.length() > answer.length())
			throw std::length_error("guess is too long");

		int strikes = 0;
		int balls = 0;

		for (size_t i = 0; i < guess.length(); i++)
		{
			char digit = guess[i];
			if (digit < '0' || digit > '9')
				throw std::invalid_argument("guess must contain only digits");

			if (digit == answer[i])
				strikes++;
			else if (answer.find(digit) != string::npos)
				balls++;
		}

		return { strikes, balls };
	}

private:
	string answer = "123";
};