# :books: flood_fill

[Subject File](./subject.en.txt) | [Solution File](flood_fill.c)

## :clipboard: Explanation

The `flood_fill` function takes a 2-dimensional array of characters (`char **tab`), the dimensions of the array (`t_point size`), and a starting point (`t_point begin`). It fills an entire zone in the array by replacing the characters inside with the character 'F'. A zone is a group of the same character delimited horizontally and vertically by other characters or the array boundary.

The implementation follows these steps:

1. The `fill` function is defined, which is a recursive helper function responsible for the actual flood fill algorithm.
2. The `fill` function takes the array, its size, the current coordinates (`x` and `y`), and the character to fill (`to_fill`).
3. Inside the `fill` function, the base cases are checked:
   - If the current coordinates are out of bounds (outside the array), return.
   - If the current character is different from the character to fill, return.
4. If the base cases are not met, set the current character to 'F' (the fill character).
5. Recursively call the `fill` function for the neighboring cells: left, right, up, and down.
6. The `flood_fill` function is defined, which serves as a wrapper function for the `fill` function.
7. The `flood_fill` function calls the `fill` function with the initial coordinates (`begin.x` and `begin.y`), the array, and the character at the starting point (`tab[begin.y][begin.x]`).
8. The `flood_fill` function correctly fills the zone in the array starting from the given starting point.

## :pencil: Subject

```
Assignment name  : flood_fill
Expected files   : flood_fill.c
Allowed functions: -
--------------------------------------------------------------------------------

Write a function that takes a char ** as a 2-dimensional array of char, a 
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone 
by replacing characters inside with the character 'F'. A zone is an group of 
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this: (put it in flood_fill.c)

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

Example:

$> cat test.c
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$> 

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: