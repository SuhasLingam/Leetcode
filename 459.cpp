class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();

        for (int i = 1; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                string substring = s.substr(0, i);
                bool valid = true;

                for (int j = i; j < n; j += i)
                {
                    if (s.substr(j, i) != substring)
                    {
                        valid = false;
                        break;
                    }
                }

                if (valid)
                {
                    return true;
                }
            }
        }

        return false;
    }
};