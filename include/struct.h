/*
** struct.h for raytracer1 in /Users/simonlejeune/C_Graphical_Programming/Sem2/raytracer1/include/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Mon Mar 13 19:26:12 2017 Simon LEJEUNE
** Last update Mon Mar 13 19:46:16 2017 Simon LEJEUNE
*/

##ifndef STRUCT_H
#define STRUCT_H

typedef	struct	s_sphere
{
  int	pos_x;
  int	pos_y;
  int	pos_z;
  int	radius;
} t_sphe;

typedef struct	s_plan
{
  int	pos_x;
  int	pos_y;
  int	pos_z;
} t_plan;

typedef struct	s_cylinder
{
  int	pos_x;
  int	pos_y;
  int	pos_z;
  int	radius;
} t_cylinder;

typedef struct	s_cone
{
  int	pos_x;
  int	pos_y;
  int	pos_z;
  int	angle;
} t_cone;

typedef struct s_delta
{
  int	a;
  int	b;
  int	c;
  int	delta;
} t_delta;

#endif
