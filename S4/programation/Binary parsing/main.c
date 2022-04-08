
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int string_to_binstring(char* iter, char* end, char** out_res)
{
	if (!iter)
		return -1;
	if (!end)
		end = iter + strlen(iter);

	while (iter != end && !(*iter == '0' || *iter == '1'))
		++iter;

	if (iter == end)
		return -2;

	unsigned int size = end - iter + 1, pos = 0;
	char* res = calloc(size, sizeof(char));
	if (!res)
		return -3;

	while (iter != end && (*iter == '0' || *iter == '1'))
		res[pos++] = *iter++;

	*out_res = res;
	return 0;
}

int main()
{
	char* str;
	if (!string_to_binstring("     ee1011101010264ta aaaa ", 0, &str))
		printf("%s\n", str);
}