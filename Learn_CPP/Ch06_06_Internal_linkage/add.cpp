// This function is declared as static, and can now be used only within this file
// Attempts to access it from another file via a function forward declaration will fail
/*
static int add(int x, int y)
{
	return x + y;
}
*/

int add(int x, int y) // external linkage
{
	return x + y;
}