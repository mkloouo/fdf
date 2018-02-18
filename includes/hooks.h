
#ifndef HOOKS_H
# define HOOKS_H

int						keyboard_hook(int keycode, void *fdf);
int						mouse_hook(int button, int x, int y, void *fdf);

#endif
