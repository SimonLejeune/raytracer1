/*
** open_window.c for raytracer in /home/slejeune/C_Graphical_Programming/Sem2/raytracer1/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Sun Mar 19 17:24:19 2017 Simon LEJEUNE
** Last update Sun Mar 19 18:31:59 2017 Simon LEJEUNE
*/

#include <SFML/Graphics.h>

#include <unistd.h>
#include <stdlib.h>

#include "my.h"
#include "struct.h"

sfRenderWindow *create_window(char *name, int width, int height)
{
  sfRenderWindow *window;
  sfVideoMode mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
    {
      exit(EXIT_FAILURE);
    }
  return (window);
}

sfUint8 *create_pixel_buffer(int width, int height)
{
  int	i;
  sfUint8 *pixels;

  pixels = malloc(width * height * 4 * sizeof(*pixels));
  if (pixels == NULL)

    exit(EXIT_FAILURE);
  i = 0;
  while (i < width * height * 4)
    {
      pixels[i] = 0;
      i++;
    }
  return (pixels);
}

void	open_window()
{
  sfRenderWindow	*window;
  sfTexture	*texture;
  sfSprite	*sprite;
  sfUint8	*pixels;
  sfEvent event;

  window = create_window("raytracer", SCREEN_WIDTH, SCREEN_HEIGHT);
  sprite = sfSprite_create();
  texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  pixels = create_pixel_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfTexture_updateFromPixels(texture, pixels, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
  while (sfRenderWindow_isOpen(window))
    {
      while (sfRenderWindow_pollEvent(window, &event))
	{
	  if (event.type == sfEvtClosed)
	    sfRenderWindow_close(window);
	}
      sfRenderWindow_clear(window, sfBlack);
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfRenderWindow_display(window);
    }
  sfRenderWindow_destroy(window);
}
