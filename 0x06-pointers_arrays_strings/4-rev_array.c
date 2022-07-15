Skip to content
Samuel-Igwudu
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
More
alx-low_level_programming/0x06-pointers_arrays_strings/4-rev_array.c
@Samuel-Igwudu
Samuel-Igwudu a function that reverses the content of an array of integers
 History
  1 contributor
  22 lines (20 sloc)  335 Bytes
#include "main.h"

  /**
   *  * reverse_array - reverse the content of an array of int
   *   * @a: array
   *    * @n: elements of array
   *     * Return: void
   *      */
  void reverse_array(int *a, int n)
{
		int i, j, k;

			for (i = 0; i < n - 1; i++)
					{
								for (j = i + 1; j > 0; j--)
											{
															k = *(a + j);
																		*(a + j) = *(a + (j - 1));
																					*(a + (j - 1)) = k;
																							}
					}
}
