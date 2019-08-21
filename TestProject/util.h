#pragma once

int CalculateOddSum(int Number)
{
	int sum = 0;
	for (int i = Number; 0 < i; i = i-2) 
	{
		sum += i;
	}
	return sum;	
}