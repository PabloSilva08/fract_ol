#include "fractol.h"
#include <stdio.h>
#include <stdlib.h>


void	paiting(t_data *frac, int color)
{
	int	x;
	int	y;

	frac->initial_x = frac->standard_width / 2;
	frac->initial_y = frac->standard_height / 2;

	y = 0;
	while (y < frac->standard_height)
	{
		x = 0;
		while (x < frac->standard_width)
		{
			if (((x - frac->initial_x) * (x - frac->initial_x)
						+ ((y - frac->initial_y) * (y - frac->initial_y))) <= 40000)
				my_mlx_pixel_put(frac, x, y, color);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(frac->mlx, frac->mlx_win, frac->img, 0, 0);
}



int keys(int keynote, int x, int y, t_data *frac)

{
	(void) x;
	(void) y;
	printf("%i\n",keynote);
	if (keynote == 2)
	{
		printf("Sayonara");
		exit(0);
	}
	if (keynote == 1)
//		mlx_clear_window(v->mlx, v->mlx_win);
		paiting(frac, 0x0000FF00);
	return (0);
}

int closex()
{
	printf("fechei com x");
	exit(0);
}

int closex2(int keycode)
{
	printf("keycode : %i\n", keycode);
	printf("fechei com x");
	if (keycode == 53)
		exit(0);
	if (keycode == 12)
		printf("SHABLAU");
	return (0);
}






int	main(void)
{
	t_data	frac;

	frac.mlx = mlx_init();
	frac.standard_width = 800;
	frac.standard_height = 800;
	frac.mlx_win = mlx_new_window(frac.mlx, frac.standard_width, frac.standard_height, "Hello world!");
	my_screen(&frac);
	//-----------------
	paiting(&frac, 0x00FF0000);
	//--------------
	mlx_mouse_hook(frac.mlx_win, keys, &frac);


    mlx_hook(frac.mlx_win, 2, 0, closex2, &frac);	
    mlx_hook(frac.mlx_win, 17, 0, closex, &frac); //	
//	mlx_put_image_to_window(frac.mlx, frac.mlx_win, frac.img, 0, 0);
	mlx_loop(frac.mlx);
}
