#include <parenthesisExpression.h>
#include <string>
#include <stdlib.h>

#define ASSERT(var) if(!(var)) return -1

int main() {
	ASSERT("2" == division("4 / 2"));
	for(int i = 0; i < 10000000; ++i) {
		int var1 = rand();
		int var2 = rand();
		if(var2 == 0)
			var2 = 1;
		int result = var1 / var2;
		ASSERT(std::to_string(result) == division(std::to_string(var1) + " / " + std::to_string(var2)));
	}
	return 0;
}
