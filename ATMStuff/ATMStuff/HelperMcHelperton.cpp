#include "HelperMcHelperton.h"

bool compareArrays(int* array1, int* array2, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (array1[i] != array2[i])
		{
			return false;
		}
	}

	return true;
}