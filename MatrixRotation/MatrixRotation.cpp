// MatrixRotation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<std::vector<int>> RotateMatrix(const std::vector<std::vector<int>>& matrix)
{
    std::vector<std::vector<int>> result(matrix[0].size());

    for (size_t i = 0; i < matrix.size(); ++i)
    {
        for (size_t j = 0; j < matrix[i].size(); ++j)
        {
			result[j].push_back(matrix[matrix.size() - i - 1][j]);
        }
    }

	return result;
}

int main()
{
	while (true)
	{
		int countX = 0, countY = 0;
		std::cout << "Matrix size: ";
		std::cin >> countY >> countX;
		if (countX == 0 || countY == 0)
			break;

		std::vector<std::vector<int>> vec(countY);
		for (int i = 0; i < countY; ++i)
		{
			vec[i].resize(countX);
			std::cout << "The number array: ";
			for (int j = 0; j < countX; ++j)
				std::cin >> vec[i][j];
		}

		std::vector<std::vector<int>> rotatedVec = RotateMatrix(vec);
		std::cout << "Rotated Matrix: " << std::endl;
		for (int i = 0; i < countX; ++i)
		{
			std::cout << "{ ";
			for (int j = 0; j < countY; ++j)
			{
				if (j != 0)
					std::cout << ", ";
				std::cout << rotatedVec[i][j];
			}
			std::cout << " }";
			if (i != countX - 1)
				std::cout << ",";
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}
