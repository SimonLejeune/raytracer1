/*
** my.h for raytracer1 in /Users/simonlejeune/C_Graphical_Programming/Sem2/raytracer1/include/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Thu Feb 23 11:20:08 2017 Simon LEJEUNE
** Last update Sun Mar 19 18:19:51 2017 Simon LEJEUNE
*/

#ifndef	MY_H
#define MY_H

#include <SFML/Graphics.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

sfRenderWindow	*create_window(char*, int, int);
sfUint8		*create_pixel_buffer(int, int);
void		open_window();
sfVector3f	calc_dir_vector(float, sfVector2i, sfVector2i);
float		intersect_cylinder(sfVector3f, sfVector3f, float);
sfVector3f	get_normal_cylinder(sfVector3f);
sfVector3f	rotate_xyz(sfVector3f, sfVector3f);
sfVector3f	rotate_zyx(sfVector3f, sfVector3f);
sfVector3f	translate(sfVector3f, sfVector3f);
float		intersect(sfVector3f, sfVector3f, float);
sfVector3f	get_normal_cone(sfVector3f, float);
float		get_light_coef(sfVector3f, sfVector3f);
float		intersect_plane(sfVector3f, sfVector3f);
sfVector3f	get_normal_plane(int);
float		intersect_sphere(sfVector3f, sfVector3f);
sfVector3f	get_normal_sphere(sfVector3f);

#endif
